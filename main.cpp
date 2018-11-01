#include <iostream>
#include "Complex.h"
using namespace std;


int main()
{
    Complex c1(2,2);
    Complex c2(2,2);
    Complex c3;
    Complex c4;
    c3 = c1*c2 ;
    cout << c3 << endl;
    cin >> c4 ;
    cout << endl;
    cout << c4 << endl;


    return 0;
}
