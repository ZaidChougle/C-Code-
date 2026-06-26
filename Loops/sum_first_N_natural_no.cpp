#include <iostream>

using namespace std;

int main()
{
    int n;
 int m =0 ;
    cout << "enetr an positive number" << endl;
    cin >> n;
    for (int i = 1; i <= n; ++i) 

    { 
      m += i ;
       
    }
cout << "the sum of first " << n << " n natural no. is " <<  m << endl;
    return 0;
}