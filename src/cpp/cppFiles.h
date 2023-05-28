/// @file cppFiles.h
/// @brief This contains the copies of the CPP file

#ifndef CPPFILES_H
#define CPPFILES_H

#include <string>
#include <cstring>

class CPP {
public:

  /// @brief This returnes the content of the C++ Makefile.
  /// @return The string of the makefile
  static std::string Makefile() {
    std::string r = "";
    r += "CCX = g++\n";
    r += "CXXFLAGS = -Wall -Wdeprecated -pedantic -g\n";
    r += "HEADERS := $(wildcard *.h) $(wildcard *.hpp)\n";
    r += "SOURCES := $(wildcard *.cpp)\n";
    r += "OBJECTS := $(SOURCES:%.cpp=%.o)\n\n";
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

  /// @brief This returnes the content of the HPP file.
  /// @param fileName the name of the HPP file
  /// @return content string
  static std::string HPP(std::string fileName) {
    std::string r = "";
    std::string F = "";
    for (size_t i = 0; i < strlen(fileName.c_str()); i++) F += toupper(fileName[i]);
    r += "/// @file " + fileName + ".hpp file\n";
    r += "/// @brief File Description (modifie!!!)\n\n\n";
    r += "#ifndef " + F + "_HPP\n";
    r += "#define " + F + "_HPP\n\n\n\n";
    r += "#endif // " + F + "_HPP\n";
    return r; 
  }

  /// @brief This returnes the contetn of the C++ file.
  /// @param fileName the name of the H file
  /// @return content string
  static std::string CF(std::string fileName) {
    std::string r = "";
    r += "/// @file " + fileName + ".cpp file\n";
    r += "/// @brief File Description (modifie!!!)\n\n\n";
    return r;
  }
};

#endif