###############################################################
# Program:
#     Checkpoint 06a, Makefiles
#     Brother Clements, CS165
# Author:
#     Nimesh Subedi
# Summary:
#     Summaries are not necessary for checkpoint assignments.
###############################################################


# Insert your rule for a.out here:
a.out : check06a.o robot.o point.o
	g++ check06a.o robot.o point.o


# Insert your rule for robot.o here:
robot.o : point.h robot.h robot.cpp
	g++ -c robot.cpp


# Insert your rule for point.o here:
point.o : point.cpp point.h
	g++ -c point.cpp


# Insert your rule for check06a.o here:
check06.o : check06a.cpp robot.h
	g++ -c check06a.cpp
