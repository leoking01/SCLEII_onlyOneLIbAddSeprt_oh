#include <iostream>
#include "mymath.h"

using namespace std;

int main(int argc, char const *argv[])
{
    ClassA  ca;
//    double a = add(1.1, 1.1);
    int b = ca.add(2, 3);
//    cout << "1.1加1.1等于" << a <<endl;
    cout << " 2 add 3 = " << b <<endl;
    return 0;
}
