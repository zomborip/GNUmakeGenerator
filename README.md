# GNU Make Generator
This CLI generates C, C++ files and Makefiles.

## Download
You can find the downloadable CLI programs at the **bin** folder.

## Usage
**CLI OPTIONS**:
+ `gen make c` *(creates a Makefile for GCC compilation)*
+ `gen make cpp` *(creates a Makefile for G++ compilation)*
+ `gen [filename] c`   *(creates a [filename].c file)*
+ `gen [filename] cpp` *(creates a [filename].cpp file)*
+ `gen [filename] h`   *(creates a [filename].h file)*
+ `gen [filename] hpp` *(creates a [filename].hpp file)*

**Makefile OPTIONS**
+ `make` *(builds the project from you Makefile)*
+ `make del` *(WINDOWS ONLY, removes .o and .exe files)*
+ `make clear` *(LINUX/UNIX ONLY, removes .o and .exe files)*

## Example

The following command generates a C++ makefile
```sh
gen make CPP
```

The following command generates the main.cpp file
```sh
gen main CPP
```

The following commands generates the myNewClass.h and myNewClass.cpp files. 
```sh
gen myNewClass CPP
gen myNewClass H
```

You can use GNU Make to build your program from your generated Makefile
```sh
make
```

After running the your program, you can clean your project with the following command (*note: make clear is linux only*)
```sh
make clear
```
