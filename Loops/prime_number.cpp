#include <iostream> 

using namespace std ;

int main(){
int n ; int number ; 
cout<<"enetr a number"<<endl;
cin>>n;
int m ; 
// cin >> m ;
for(int i = 2 ; i < n ; i++)
{
 m = n % i==0 ;
}      

if (n >= 1 ){
       cout<<m<<" is not a prime no . "<<endl;
}
else if (n<=1){

       cout <<m<<" is a prime no."<<endl;
}
       return 0 ;
}