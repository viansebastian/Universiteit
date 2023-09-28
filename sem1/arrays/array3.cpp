#include <iostream>
using namespace std; 

int main(){//define max min 
    int n= 10;
    int secondArr[n] = {34, 12, 63, 75, 16, 85, 27, 73, 72, 15};
    cout << "second array" << endl; 
    for (int i = 0; i<n; i++){
        cout << i << " : " << secondArr[i] << endl; 
    }

    int ans = secondArr[0];
    int ansmin = secondArr[0]; 

    for (int i = 1; i<n; i++){
        if (secondArr[i] > ans){ans = secondArr[i];}
    }
    cout << ans << endl; 

    for (int i = 1; i<n; i++){
        if (secondArr[i] < ansmin){ansmin = secondArr[i];}
    }
    cout << ansmin << endl;  

    return 0; 
}