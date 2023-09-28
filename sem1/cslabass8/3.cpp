#include <iostream>
using namespace std;

int ackerman(int a, int b){
    if(a == 0){
        return b+1; 
    }
    else if(a != 0 && b != 0){
        return ackerman(a-1, 1)
    }
    else if(a != 0 && b != 0){
        return ackerman(a-1, ackerman(a, b-1)); 
    }
}

int main(){
    int a, b; 
    cout << "first number: " ; 
    cin >> a; 
    cout << "second number: " ;
    cin >> b;
    
    cout << "the ackerman function is: " << ackerman(a,b); 
    return 0;
}