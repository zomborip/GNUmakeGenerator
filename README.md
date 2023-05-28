# GNU Make Generator
This CLI generates C, C++ fiels and Makefiles.

## Download
You can find the downloadable CLI programs at the **bin** folder.

## Usage
**CLI OPTIONS**:
+ `make c` *(creates a Makefile for GCC compilation)*
+ `make cpp` *(creates a Makefile for G++ compilation)*
+ `[filename] c`   *(creates a [filename].c file)*
+ `[filename] cpp` *(creates a [filename].cpp file)*
+ `[filename] h`   *(creates a [filename].h file)*
+ `[filename] hpp` *(creates a [filename].hpp file)*

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
