#include <iostream>
using namespace std;

int bin(int a, int b){
    if (b == 0 || b == a){
        return 1; 
    }
    else if(b > 0 && a > 0){
        return (bin(a-1, b-1) + bin(a-1, b)); 
    }
}

int main(){
    int a, b; 
    cout << "first number: " ; 
    cin >> a; 
    cout << "second number: " ;
    cin >> b;
    
    cout << "binomial coefficient: " << bin(a,b); 
    return 0;
}