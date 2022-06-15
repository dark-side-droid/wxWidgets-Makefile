# wxWidgets makefile example

This archive represents a simple standalone precompiled project which illustrates how to setup a makefile to work with wxwidgets. You need to have wxWidgets 3.1.6 or later installed for this example to work. Tested and works on debian 11.

To compile simply cd into project folder and `make`.

## Setup precompiled headers

To reduce compilation times when working with complex apps you need to create precompiled headers. In this example we precompile `precom.h` which only includes wxwidgets headers. The command to do so is :

```bash
g++ -c ./Headers/precom.h `wx-config --cxxflags`
```
This creates `precom.h.gch` which the compiler uses in place of  `precom.h` at compilation time.

## Makefile Explanation

To compile our final standalone executable `App` we first need to setup its dependencies `main.o` and `mainframe.o`.

The `-o` is for linking the files. The `-no-pie` flag creates an executable instead of a *shared-library*. Virtually makes no difference.

To compile the `main.o` object we depend upon `mainframe.o` object. Both objects are compiled with an identical command.

The `-c` flag stands for compiling the code but not linking. The `.o` object files are created automatically in the same folder as the make file.

After you run `make` you should see the following commands appear in the terminal with no errors.

```
g++ -c ./Source/mainframe.cpp `wx-config --cxxflags` 
g++  -c ./Source/main.cpp `wx-config --cxxflags` 
g++ main.o mainframe.o `wx-config --libs`  -o App 
```
Executing `App` should run the application normally.