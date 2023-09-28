#include <iostream>
#include <stdio.h>
using namespace std; 

void a (int n){
    if (n == 0){
        cout << " ";
    }
    else{
        int d = n%10;
        int f = n/10; 
        cout << d; 
        a(f); 
    }
}
int main(){
    int n; 
    cout << "Enter number: "; 
    cin >> n; 
    a(n); 
    return 0; 
}