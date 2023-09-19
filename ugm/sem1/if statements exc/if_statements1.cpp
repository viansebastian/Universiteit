#include <iostream>
using namespace std; 

int main(){            
    string book;
    cout << "what book? " << endl; 
    cin >> book; 

    int price; 
    cout << "how much " << endl; 
    cin >> price; 
    // operators &&(and) || (or) !(not)

                
    if ((book == "cs") || (price > 100000)) {
        cout << "buy! " << endl; 
    }
    else {
            cout << "dont buy! " << endl; 
        }
}