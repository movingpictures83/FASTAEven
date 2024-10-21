#ifndef FASTAEvenPLUGIN_H
#define FASTAEvenPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class FASTAEvenPlugin : public Plugin
{
public: 
 std::string toString() {return "FASTAEven";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
