//Riddhi Musale
//Prn:23070123108
//Exp 5 default and break keyword
#include <iostream>
using namespace std;
int main(){
    int choice;
cout<<"1.January"<<endl<<"2.February"<<endl<<"3.March"<<endl<<"4.April"<<endl<<"5.May"<<endl;

cout<<"Enter your choice: ";
cin>>choice;
switch(choice) {
case 1:
cout<<"January";
break;
case 2:
cout<<"February";
break;
case 3:
cout<<"March";
break;
case 4:
cout<<"April";
break;
case 5:
cout<<"May";

break;
default:
cout<<"First five months";
}
return 0;
}