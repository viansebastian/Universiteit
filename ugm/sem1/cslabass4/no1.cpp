#include <iostream>
using namespace std; 

int main(){
    int a, rows; 
    int b = 1; 
    cout << "number of rows: " << endl; 
    cin >> rows; 


    a = rows -1; 
    for (int p = 1; p <= rows; p++){
        for (int j = 1; j <= a; j++){cout << " ";}
        for (int j = 1; j <= b; j++){cout << "*";}
        for (int j = 1; j <= a; j++){cout << " ";}
        a--; b += 2;
        cout << endl; 
    }
    return 0; 
}