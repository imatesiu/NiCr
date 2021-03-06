![lol](http://1.bp.blogspot.com/-tHrVNJlAEpg/VpuNi2ifWAI/AAAAAAAACPk/f2MtVT0W-Jw/s1600/nicr1.png)

NiCr (read as 'nickel-chrome' or 'nicrome') is my ongoing OpenSource and OpenHardware project that aims to create a low-cost CNC hot wire foam cutter, built from easy to find and easy to work with materials. Check the project presentation [video](https://www.youtube.com/watch?v=iOVO2aQ5I9E)

This project is comprised of three parts:

#### Shape modelling and .nicr path generator:

The shape modelling and machine code generation (which has the extension '.nicr' and a syntax similar to GCode) takes place inside FreeCAD with the use of a workbench specifically created for this machine.

![wobn](http://1.bp.blogspot.com/-WLxCrk3_lB8/VpuSEJHBiBI/AAAAAAAACP4/0qIBWCErTu4/s1600/Captura%2Bde%2Bpantalla%2Bde%2B2016-01-12%2B19%253A55%253A15.png)

Trying to keep it simple, the workbench workflow is as follows:
You place the 3D shapes inside a virtual machine (whose dimensions must be in concordance with your physical machine), then you create the paths for this shapes (wich have several options like accuracy or cut direction) and finally, you establish links between those paths in the way you want them to be cutted. 

For a better understanding I have recorded [this video] (https://www.youtube.com/watch?v=IMD8KxX-TPg) that shows the current state of this workbench.

You can find the NiCr workbench for FreeCAD, installation guide and more info in the 'Workbench' folder

#### Machine movement using Arduino:
The .nicr file is read by an Arduino Mega that is executing a custom firmware specially created for this machine. This Arduino Mega executes the given commands through a RAMPS shield. The electronics are very simple and can be easily swapped from a 3D printer.

![stp](http://4.bp.blogspot.com/-V76bpr6YrwI/VjNOp6mwWoI/AAAAAAAABzo/c6pHufpuTyY/s1600/SyncChart.png)

Some details of the algorithms used are posted in my blog:

-[Stepper Synchronism](http://linuxforanengineer.blogspot.com.es/2015/10/arduino-move-4-stepper-motors.html)

-[Instruction Feed](http://linuxforanengineer.blogspot.com.es/2015/10/arduino-read-instruction-from-serial.html)


The .ino file and more info about this firmware are allocated inside the 'Firmware' folder.

#### The machine:
This machine was conceived to cut wing cores for lamination and molding, but nothing stops you from using it for creating whatever you can imagine, this is open source!

![machine](http://1.bp.blogspot.com/-QoElVcr7HH0/VpuRw1s5K1I/AAAAAAAACPw/6W0tOLbVLAs/s1600/Captura%2Bde%2Bpantalla%2Bde%2B2015-07-20%2B01%253A44%253A43.png)

The frame is formed by square aluminium tubing kept together with the use of basic bolt&nut joints. This square tubes are light, easy to work with and cheap. Along those aluminium tubes, sliders created from an aluminium sheet run over 10mm diameter ball bearings. This sliders avoid expensive comercial solutions that, for this machine, would have the same perfomance.
Some parts of the machine are 3D printed, but alternative solutions will be published for those people who do not have access to this machines.

As the NiCr machine is being built and designed, there are not definitive 3D parts of it at the moment. But once I get everything to work correctly, a new folder called 'Machine' will be added to this repository. It will contain the complete machine assembly in FreeCAD and some directions for building and setting it into working conditions.


####Post in LinuxForAnEngineer:
http://linuxforanengineer.blogspot.com.es/2015/12/nicr.html
