import serial
import sys
from time import sleep


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
			print reply
			print len(reply)
			sleep(.1)
			if x==8:
				break
	if x==-1:
		exit(0)
	
ser.close()