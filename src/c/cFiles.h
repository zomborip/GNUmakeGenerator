/// @file cFiles.h
/// @brief This contains the copies of the C file

#ifndef CFILES_H
#define CFILES_H

#include <string>
#include <cstring>

class C {
public:

  /// @brief This returnes the content of the C Makefile.
  /// @return The string of the makefile
  static std::string Makefile() {
    std::string r = "";
    r += "CCX = gcc\n";
    r += "CXXFLAGS = -Wall -Wdeprecated -pedantic -g\n";
    r += "HEADERS := $(wildcard *.h)\n";
    r += "SOURCES := $(wildcard *.c)\n";
    r += "OBJECTS := $(SOURCES:%.c=%.o)\n\n";
    r += "main: $(OBJECTS)\n";
    r += "\t$(CCX) $^ -g -o program\n\n";
    r += "%.o: %.c $(HEADERS)\n";
    r += "\t$(CCX) $(CXXFLAGS) -c $<\n\n";
    r += "clear:\n";
    r += "\trm -rf *.o program\n\n";
    r += "del:\n";
    r += "\tdel /q *.o *.exe\n";
    return r;
  }

  /// @brief This returnes the content of the H file.
  /// @param fileName the name of the H file
  /// @return content string
  static std::string H(std::string fileName) {
    std::string r = "";
    std::string F = "";
    for (size_t i = 0; i < strlen(fileName.c_str()); i++) F += toupper(fileName[i]);
    r += "/// @file " + fileName + ".h file\n";
    r += "/// @brief File Description (modifie!!!)\n\n\n";
    r += "#ifndef " + F + "_H\n";
    r += "#define " + F + "_H\n\n\n\n";
    r += "#endif // " + F + "_H\n";
    return r; 
  }

  /// @brief This returnes the contetn of the C file.
  /// @param fileName the name of the H file
  /// @return content string
  static std::string CF(std::string fileName) {
    std::string r = "";
    r += "/// @file " + fileName + ".c file\n";
    r += "/// @brief File Description (modifie!!!)\n\n\n";
    return r;
  }

};

#endif