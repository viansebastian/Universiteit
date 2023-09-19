#include <iostream>
using namespace std; 

int main(){
    int number; 
    cout << "input a number: "; 
    cin >> number; 
    
    if (number%2 == 1){
        number -= 1; 
        while (number >= 0){
            cout << number << " "; 
            number -= 2; 
        }
    }
}