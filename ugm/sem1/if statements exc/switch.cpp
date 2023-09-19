#include <iostream>
using namespace std; 

int main(){
    int n; 
    cin >> n; 

    switch (n)
    {
    case 1:
        cout << "show the balance" << endl; 
        break;
    case 2: 
        cout << "transfer" << endl; 
        break; 
    case 3: 
        cout << "change pin " << endl; 
  
    default:
        cout << "exit" << endl; 
        break;
    }
    return 0;   
}