#ifndef CMD_H
#define CMD_H
#include <iostream>
#include <string>

extern bool bCaesar, bAffine, bAZ;
namespace cmd {
    void options(std::string sCmd);
    void help();
}
#endif
