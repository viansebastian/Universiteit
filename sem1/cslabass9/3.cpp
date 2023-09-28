#include <bits/stdc++.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std; 

int main(){
    srand(time(NULL)); //everytime this program runs it will take a new random integers
    int n;
    cout << "enter number of data: "; 
    cin >> n; 
    int arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100 + 1; 
    }

    int arrSize = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    cout << endl; 

    sort(arr, arr + arrSize); 

    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }

    return 0;
}