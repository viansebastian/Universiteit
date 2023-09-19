#include <iostream>
using namespace std; 

int main(){
    for (int a = 1; a < 10; a++){
        for (int b = 1; b < 10; b++){
            int r = a * b; 
            cout << a << "x" << b << "=" << r; 

            if (r <= 9) {cout << "  ";}
            else {cout << " ";}
        }
        cout << endl;
    }
    return 0; 
}