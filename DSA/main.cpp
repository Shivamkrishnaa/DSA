//
//  main.cpp
//  DSA - Check prime
//
//  Created by shivam krishna on 05/03/22.
//
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n=829702;
    for(int i=1; i<n/2; i++){
        if(n%i==0) {
            cout<<"NO"<<endl;
        }
    }
    cout<<"YES";
    
    return 0;
}
