#include <iostream>

using namespace std;

int main() {
    
 cout<<"Enter your age "<<endl;
 int age;
 cin >> age ; 
 
 if (age>=18)
{
  cout<< "You can vote"<<endl;
}
else if (age < 1)
{ 
    cout<<"Add valid age "<<endl;
}
else {
    cout << "Cannot vote" <<endl;
}
    return 0;
}

