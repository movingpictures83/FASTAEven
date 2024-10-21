#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "FASTAEvenPlugin.h"

void FASTAEvenPlugin::input(std::string file) {
 inputfile = file;
}

void FASTAEvenPlugin::run() {}

void FASTAEvenPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "awk \'{if(NR%2==0)print $0}\' "+inputfile+" > "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<FASTAEvenPlugin> FASTAEvenPluginProxy = PluginProxy<FASTAEvenPlugin>("FASTAEven", PluginManager::getInstance());
