#include <iostream>
using namespace std;

int main()
{
int a , b, choice;
cout << "1=addition" <<endl;
cout << "2=substraction" << endl;
cout << "3=multiplication" <<endl;
cout << "4=division" <<endl;
cin >> (choice);
cout << "enter two numbers for A and B";
cin >> a>>b;

switch(choice)
{ case 1:
cout <<"A+B =" <<a+b;
break;
case 2 :
cout << " A-B=" << a-b;
break;
case 3 : 
cout << " A*B=" << a*b;
break;
case 4 :
cout << "A/B=" << a/b;
default : cout << "user entered wrong choice" << endl;
}
    return 0;
}