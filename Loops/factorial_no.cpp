#include <iostream> 

using namespace std ;

int main(){
int n ; 
cout<<"enter number"<<endl;
cin>>n; 
int m = 1 ; 
for (int i = 1 ; i<=n ; i ++)
{
  m = m * i ;
    // cout<<"the factorial no. is "<<(i = n * n - 1 ) <<endl;
}


 cout<<"the factorial no. is "<< m <<endl;

    return 0 ;
}