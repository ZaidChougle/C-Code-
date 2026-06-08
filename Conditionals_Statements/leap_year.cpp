#include <iostream>

using namespace std;

int main() {
    
 cout<<"Enter year "<<endl;
 int year;
 cin >> year ;
 
 year % 4 == 0 ? cout<<"It is a leap year" : cout<<"It is not a leap year";

 
 
    return 0;
}