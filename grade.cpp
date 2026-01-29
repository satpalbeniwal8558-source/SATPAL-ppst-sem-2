#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks obtained: ";
    cin >> marks;

    if (marks <= 100 && marks >= 90) {
        cout << "O" << endl;   // Outstanding
    }
    else if (marks < 90 && marks >= 80) {
        cout << "A+" << endl;
    }
    else if (marks<80 && marks>=70){
        cout << "A" << endl;
    }
    else if (marks<70 && marks>=60){
        cout << "B+" << endl;}
    else if (marks<60 && marks>=50){
        cout << "B" << endl;}
    else if (marks<50 && marks>=40){
        cout << "C+" << endl;}
    else if (marks<40){
        cout << "F" << endl;} // fail
        
    return 0;
}