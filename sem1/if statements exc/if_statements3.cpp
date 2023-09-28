#include <iostream>
using namespace std; 
//which is larger 

int main(){
    int n1, n2; 
    cout << "enter a number: " << " " << endl; 
    cin >> n1; 
    cout << "enter a number (again): " << " " << endl; 
    cin >> n2; 

    if (n1 > n2) { 
        cout << n1 << "larger than " << n2 << endl; 

    }
        else { 
            cout << n2 << "larger than " << n1 << endl; 
        }
}