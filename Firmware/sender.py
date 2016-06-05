import sys
import os
from time import sleep
import urllib2
import tarfile
import subprocess

y = 1
while y>0:
	try:
		from serial import *
		import serial
		y=-1
		if len(sys.argv)>2:
			port = sys.argv[2]
		else:
				port = "COM12"
		print port
		ser = serial.Serial(port,115200,timeout=.9)
		fname = sys.argv[1]
		with open(fname) as f:
			contents = f.readlines()
		
		x=0
		for content in contents:
			if("\n" in content):
				command = content[:len(content)-1]
			else:
				command = content
			if len(command)>0:
				if(command[0:1]=="\\"): continue;
			x+=1
			if(x<8): continue;
			print command
			ser.write(str(command))
			reply = ser.readline()
			print  str(reply)
			if str(reply)!='0\r\n':
				while str(reply)!='0\r\n':
					reply = ser.readline()
					if str(reply)=='0\r\n': 
						print 'DONE'
					else:
						print reply
					sleep(.1)
					if x==8:
						break
			if x==-1:
				exit(0)
		ser.close()
	
	except ImportError:
		mp3file = urllib2.urlopen("https://pypi.python.org/packages/source/p/pyserial/pyserial-3.0.1.tar.gz#md5=c8521e49f8852196aac39431e0901703")
		output = open('pyserial-3.0.1.tar.gz','wb')
		output.write(mp3file.read())
		output.close()
		tar = tarfile.open("pyserial-3.0.1.tar.gz")
		tar.extractall()
		tar.close
		path = os.getcwd()
		os.chdir(path+'/pyserial-3.0.1/')
		print subprocess.call('python setup.py install', shell=True)
		if y==2:
			y=-1
			break
		y+=1
		#print execfile(path+'/pyserial-3.0.1/setup.py')
		#subprocess.call([path+'/pyserial-3.0.1/setup.py', 'install'])
	
		
