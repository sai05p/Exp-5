//Riddhi Musale
//Prn:23070123108
//Exp 5  Nested if else statement 
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Enter three numbers: ";
    cin >>a>>b>>c;

    if (a==b &&b==c) {
        cout << "All three numbers are equal." << endl;
    } else {
        if (a>b) {
            if (a>c) {
                cout << "The greatest number is " <<a<< "." << endl;
            } else {
                cout << "The greatest number is " <<c<< "." << endl;
            }
        } else {
            if (b>c) {
                cout << "The greatest number is " <<b<< "." << endl;
            } else {
                cout << "The greatest number is " <<c<< "." << endl;
            }
        }
    }

    return 0;
}
