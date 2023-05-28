#include <iostream>
#include <cstring>
#include "cli/cli.h"

using std::cout;
using std::endl;

int main(int argc, char **argv) {

  switch (argc) {
    case 1:
      CLI::help(true);
      break;

    case 3:
      if (strcmp(argv[1], "make") == 0) {
        if (strcmp(argv[2], "c") == 0   || strcmp(argv[2], "C") == 0)    { CLI::addCMake();    } else
        if (strcmp(argv[2], "cpp") == 0 || strcmp(argv[2], "CPP") == 0)  { CLI::addCPPMake();  }
        else { PRINT2("ERROR\nBad inputs!"); CLI::help(false); break; }
      } else {
        if (strcmp(argv[2], "c") == 0    || strcmp(argv[2], "C") == 0)    { CLI::addC(argv[1]);   } else 
        if (strcmp(argv[2], "cpp") == 0  || strcmp(argv[2], "cpp") == 0)  { CLI::addCPP(argv[1]); } else 
        if (strcmp(argv[2], "hpp") == 0  || strcmp(argv[2], "HPP") == 0)  { CLI::addHPP(argv[1]); } else 
        if (strcmp(argv[2], "h") == 0    || strcmp(argv[2], "H") == 0)    { CLI::addH(argv[1]);   } 
        else { PRINT2("ERROR\nBad inputs!"); CLI::help(false); }
      }
      break;

    default:
      PRINT2("ERROR\nBad inputs!");
      CLI::help(false);
      break;
  }

  return 0;
}
