#include <iostream> 
using namespace std; 

int main(){
    int p; 
    cout << "Enter the max number for the multiplication table: "; 
    cin >> p; 

    for (int i=0; i <= p; i++){cout << i << "   ";}
    cout << endl; 

    for (int i = 0; i <= p; i++){
        cout << i << " -"; 
        for (int j = 0; j <= p; j++){
            int k = i*j; 
            if(k <= 9){cout << "  ";}
            else cout << " ";
            cout << k; 
        }
        cout << endl; 
    }
    return 0; 
}