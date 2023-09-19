#include <iostream>
using namespace std; 

int main(){ 
    int n = 10; 
    int firstArr[n];
    for (int i = 0; i<n ; i++){firstArr[i] = 0;}
    cout << "first array" << endl; 

    for (int i =0; i<n; i++){
        cout << i << " : " << firstArr[i] << endl; 
    }

    int secondArr[n] = {34, 12, 63, 75, 16, 85, 27, 73, 72, 15};
    cout << "second array" << endl; 
    for (int i = 0; i<n; i++){
        cout << i << " : " << secondArr[i] << endl; 
    }
    return 0; 
}

