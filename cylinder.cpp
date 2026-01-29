#include <iostream>
using namespace std;

int main()
{
    float r,h,a;
    cout << "enter the value of r and h ";
    cin >> r>>h;

    a = 2*3.14*r*h+2*3.14*r*r;

    cout << "surfacearea of cylinder = " << a << endl;

    return 0;
}