#include "process.h"
#include <iostream>
#include "show_result.h"
using namespace std;
int main()
{
    cout << "plan process" << endl;
    Process my_process;
    my_process.planProcess();
    cout << "plan end" << endl;

    cout << "show result" << endl;
    ShowResult my_show_result;
    my_show_result.drawResult();
    cout << "show end" << endl;
    return 0;
}