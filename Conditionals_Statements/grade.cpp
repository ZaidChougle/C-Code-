#include <iostream>

using namespace std;

int main() {

int grade ;
cout<< "Enter your marks "<<endl;
cin>>grade;

if (grade>=90)   
{
    cout<<"Your grade is A"<<endl;
}

else if (grade>=75)
{
    cout<<"Your grade is B"<<endl;
}

else if (grade>=50)
{
    cout<<"Your grade is C"<<endl;
}

else if (grade<50)
{
    cout<<"You are fail"<<endl;
}

    return 0;
}
