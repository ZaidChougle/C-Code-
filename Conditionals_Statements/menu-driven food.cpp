#include <iostream>

using namespace std;

int main() {
    
    int choice ;
    cout<<"1.pizza "<<endl << "2.Burger"<<endl << "3.pasta"<<endl <<"4.exit"<<endl ;
    cin>>choice;
    
    switch (choice)
    {
case 1: cout<<"You ordered pizza" ; break;
case 2: cout<<"You ordered Burger" ; break;
case 3: cout<<"You ordered pasta"; break ;
case 4: cout<<"Exiting"; break;
default : cout <<"Invalid choice"; break ;
    }
    return 0;
}
