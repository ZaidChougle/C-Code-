#include <iostream>

using namespace std;


int main() {
    int number;
    cout<<"Enter a Number "<<endl;
    cin>>number;
    
 if (number>1)
    {
        cout<<"The no. is positive"<<endl;
    }
    
else  if (number<1)
    {
        cout<<"The no. is negative "<<endl;
    }
    
    if (number==0)
    {
        cout<<"The no. is zero"<<endl;
    }
    
   
    return 0;
}
