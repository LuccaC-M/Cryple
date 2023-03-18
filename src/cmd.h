#ifndef CMD_H
#define CMD_H
#include <iostream>
#include <string>

extern bool bCaesar, bAffine, bAZ;
namespace cmd {
    int options(std::string sCmd);
    void print_help();
}
#endif
