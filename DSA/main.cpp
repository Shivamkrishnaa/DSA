//
//  main.cpp
//  DSA - POINTERS
//
//  Created by shivam krishna on 05/03/22.
//

#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int *p = &x;
    int **q = &p;
    cout<<" X "<<x<<endl;
    cout<<" P "<<*p<<endl;
    cout<<" Q "<<**q<<endl;
    cout<<" Address of X "<<&x<<endl;
    cout<<" Address of X from p "<<p<<endl;
    cout<<" Address of X from q "<<*q<<endl;
    cout<<" Address of P "<<&p<<endl;
    cout<<" Address of P from Q "<<q<<endl;
}
