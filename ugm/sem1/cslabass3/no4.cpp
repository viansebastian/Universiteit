#include <iostream>
using namespace std; 

int main(){
    float n; 

    cout << "input a number: " << endl; 
    cin >> n; 

    int x = n/1; 

    if (n<=0 || n>=0 && x*1 == n){
        cout << "the number is an integer";
    }
    else {
        cout << "the number isn't an integer.";
    }
    return 0;
}