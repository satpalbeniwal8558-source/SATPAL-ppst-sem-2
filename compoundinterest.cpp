#include <iostream>
#include<math.h>
using namespace std;

int main(){
float p,r,t,ci;
cout<<"enter value of p,r,t,";
cin>>p>>r>>t;
ci = p*(pow((1+r/100),t));
cout<<"ci="<<ci<<endl;
return 0;

}