#include <iostream>

using namespace std ; 

int main() {
int a ;
cout<<"enter firts no."<<endl;
cin>>a;

char op ;
cout<<"enter oprator"<<endl;
cin>>op;

int b;
cout<<"enter second number"<<endl;
cin>>b;

// float  a;
// float  b;

switch (op)
{
    case '+': cout<<"result = "<<a+b; break;
    case '-': cout<<"result = "<<a-b; break ;
    case '*': cout<< "result = "<<a*b; break;
    case '/':cout<<"result = "<<a/b; break;
     
    default : cout<<"add a valid opretor"<<endl;
    break;
}

    return 0;


    
}