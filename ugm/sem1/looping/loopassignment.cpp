#include <iostream>
using namespace std; 

int main(){
    int rows, a, b, c; 
    cout << "enter a positive odd number: " << " " << endl; 
    cin >> rows; 
    for (a = 0; a < rows; a++){
        for(b = 1; b < i; b++){cout << " ";}
        for(c = a; c <= rows; c++){cout << "*" << " ";}
        cout << endl; 
    }

    for (a = rows - 1; a >= 1; a--){
        for(b = 1; b < a; b++){cout << " ";}
        for(c = a; c <= rows; c++;){cout << "*" << " ";
        cout << endl;}
    }
}


// int input; 
    // cout << "input a positive odd number: " << " " << endl; 
    // cin >> input; 

    // int middle = (input+1)/2; 

    // for(int i = 0; i <= middle; i++){
    //     for(int j = input; j >= middle; j = j - 2){
    //         cout << "*";
    //     } cout << endl; 
    // }
    
