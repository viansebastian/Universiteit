#include <iostream>
using namespace std; 

int main(){
    int n; 
    cin >> n; 
    int result = 0; 
    for(int i = 1; i <= n ; i++){//initial, condition, update   
        result = result + i ; 
    }
    cout << result; 
    // cout << 10/3 << endl; 
    // cout << 5/3 << endl;
     return 0; 
}
