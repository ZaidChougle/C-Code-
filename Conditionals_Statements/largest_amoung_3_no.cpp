#include <iostream>

using namespace std;

int main() {
  int a ,b , c ; 
  cout<<"Enter Three numbers "<<endl;
  cin>>a;
  cin>>b;
  cin>>c;

if(a>=b && a>=c) {
cout<<"Largest"<<endl <<a ;
}
else if (b>=a && b>=c)
{ 
    cout<<" Largest"<<endl << b;
}

else if (c>=a && c>=b)
{
    cout<<"Largest"<<endl << c;
}
    return 0;
}
