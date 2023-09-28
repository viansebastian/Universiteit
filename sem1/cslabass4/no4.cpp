#include <iostream> 
using namespace std; 

int main(){
    int a, b; 
    cout << "Enter 2 integers: "; 
    cin >> a >> b; 

    cout << "Output: " << endl;
    for(int i = 1; i<=a ; i++){
        if (i%b == 0){cout << "*";}
        else {cout << i << " ";}
    }
    return 0; 
}