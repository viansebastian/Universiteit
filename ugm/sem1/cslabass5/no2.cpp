#include <iostream> 
#include <string.h> 
#include <bits/stdc++.h>

using namespace std; 

int main(){
    int n, a; 
    string b;  

    cout << "enter a number: ";
    cin >> n; 
    cout << "the binary of " << n << " is " << endl; 

    while(n>0){
        int x = n%2; 
        n = n/2; 
        a++; 
    }

    for (int i = a-1; i >= 0; i--){
        cout << binary[i] << " "; 
    }
    return 0; 
}