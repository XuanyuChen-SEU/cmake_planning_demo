#include <iostream>
#include "process.h"
using namespace std;
void Process::planProcess()
{
    cout << "Process start" << endl;
    my_map.map_info();
    cout << "Process end" << endl;
}