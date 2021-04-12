#include <iostream>
#include "diod.h"

using namespace std;

int main()
{
    LedDiod d;
    cout << d.calcDiodCurrent(1) << endl;
    cout << "complete";
    return 0;
}
