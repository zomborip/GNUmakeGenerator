CCX = g++
CXXFLAGS = -Wall -Wdeprecated -pedantic -g 

PROGNAME = gen

C_DIR := c
CPP_DIR := cpp
CLI_DIR := cli

HEADERS := $(wildcard $(C_DIR)/*.h) $(wildcard $(CPP_DIR)/*.h) $(wildcard $(CLI_DIR)/*.h)
SOURCES := $(wildcard $(C_DIR)/*.cpp) $(wildcard $(CPP_DIR)/*.cpp) $(wildcard $(CLI_DIR)/*.cpp) $(wildcard *.cpp)
OBJECTS := $(SOURCES:%.cpp=%.o)

main: $(OBJECTS)
	$(CCX) $^ -g -o $(PROGNAME)
	
%.o: %.c $(HEADERS)
	$(CCX) $(CXXFLAGS) -c $<
	
clear:
	rm -rf $(OBJECTS) $(PROGNAME)

clearo:
	rm -rf *.o
	rm -rf c/*.o
	rm -rf cpp/*.o
	rm -rf cli/*.o

del:
	del *.o
	del c\*.o
	del cpp\*.o
	del cli\*.o
	del *.exe

delo: 
	del *.o
	del c\*.o
	del cpp\*.o
	del cli\*.o

