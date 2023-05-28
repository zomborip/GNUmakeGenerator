#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include "cli.h"
#include "../c/cFiles.h"
#include "../cpp/cppFiles.h"

using std::string;
using std::fstream;
using std::cout;
using std::endl;

void CLI::addH(string fileName) {
  fstream f;
  f.open(fileName + ".h", fstream::app);
  if (f.fail())    {f.close(); return;}
  if (!f.is_open()) {f.close(); return;}
  f << C::H(fileName);
  f.close();
}

void CLI::addC(string fileName) {
  fstream f;
  f.open(fileName + ".c", fstream::app);
  if (f.fail())    {f.close(); return;}
  if (!f.is_open()) {f.close(); return;}
  f << C::CF(fileName);
  f.close();
}

void CLI::addHPP(string fileName) {
  fstream f;
  f.open(fileName + ".hpp", fstream::app);
  if (f.fail())    {f.close(); return;}
  if (!f.is_open()) {f.close(); return;}
  f << CPP::HPP(fileName);
  f.close();
}

void CLI::addCPP(string fileName) {
  fstream f;
  f.open(fileName + ".cpp", fstream::app);
  if (f.fail())    {f.close(); return;}
  if (!f.is_open()) {f.close(); return;}
  f << CPP::CF(fileName);
  f.close();
}

void CLI::addCMake() {
  fstream f;
  f.open("Makefile", fstream::app);
  if (f.fail())    {f.close(); return;}
  if (!f.is_open()) {f.close(); return;}
  f << C::Makefile();
  f.close();
}

void CLI::addCPPMake() {
  fstream f;
  f.open("Makefile", fstream::app);
  if (f.fail())    {f.close(); return;}
  if (!f.is_open()) {f.close(); return;}
  f << CPP::Makefile();
  f.close();
}

void CLI::help(bool mode = false) {
  if (mode) {
    PRINT("GNU Make Generator");
    PRINT2("v 1.0.1");
  }
  PRINT("COMMANDS:");
  PRINT("\tmake C\t\t\t-creates a C Makefile");
  PRINT("\tmake CPP\t\t-creates a CPP Makefile");
  PRINT("\t[fileName] H\t\t-creates a [fileName].h file");
  PRINT("\t[fileName] HPP\t\t-creates a [fileName].hpp file");
  PRINT("\t[fileName] C\t\t-creates a [fileName].c file");
  PRINT2("\t[fileName] CPP\t\t-creates a [fileName].cpp file");  
}
