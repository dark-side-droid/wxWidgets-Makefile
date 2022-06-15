#	FLAGS ARE INCLUDED WHEN COMPILING FOR THE OBJECTS
flags = `wx-config --cxxflags`

#	LIBS ARE INCLUDED WHEN COMPILING OUR EXECUTABLE
libs = `wx-config --libs`

#	C++ FILES DIRECTORY
dir = ./Source/

#	COMPILER
cc = g++

#	SETUP
App: main.o mainframe.o
	$(cc) main.o mainframe.o $(libs)  -o App -no-pie

main.o : mainframe.o
	$(cc)  -c $(dir)main.cpp $(flags) 

mainframe.o: 
	$(cc) -c $(dir)mainframe.cpp $(flags) 

clean:
	rm -rf ./*.o
	rm -rf ./App
