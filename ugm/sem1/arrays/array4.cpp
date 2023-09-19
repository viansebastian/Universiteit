#include <iostream>
using namespace std; 

int main(){//sum of data 
    int n= 10;
    int secondArr[n] = {34, 12, 63, 75, 16, 85, 27, 73, 72, 15};
    cout << "second array" << endl; 
    for (int i = 0; i<n; i++){
        cout << i << " : " << secondArr[i] << endl; 
    }

    int dataSum = 0;
    for (int i=0; i<n; i++){
        dataSum = dataSum + secondArr[i];
    }

    cout << dataSum; 
}