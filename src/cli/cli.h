/// @file cli.h
/// @brief This represents the CLI class

#ifndef CLI_H
#define CLI_H

#include <string>
#include <iostream>

inline void PRINT(std::string s) { std::cout << s << std::endl; }
inline void PRINT2(std::string s) { std::cout << s << std::endl << std::endl; }

class CLI {
  public:
  
  /// @brief This adds a .h file to the folder.
  /// @param fileName name of the H file. 
  static void addH(std::string);

  /// @brief This adds a .c file to the folder.
  /// @param fileName name of the C file.
  static void addC(std::string);

  /// @brief This adds a .cpp file to the folder.
  /// @param fileName name of the C++ file.
  static void addCPP(std::string);

  /// @brief This adds a .hpp file to the folder.
  /// @param fileName name of the HPP file
  static void addHPP(std::string);

  /// @brief This adds a C type Makefile to the folder.
  static void addCMake();

  /// @brief This adds a C++ type Makefile to the folder.
  static void addCPPMake();

  /// @brief This prints the help message to the standard output.
  /// @param mode indicates if it was called by the user or by the program
  static void help(bool);
};

#endif