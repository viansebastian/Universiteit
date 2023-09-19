#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n; 
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ansmax = arr[0];
    int ansmin = arr[0]; 

    for (int i = 1; i<n; i++){
        if (arr[i] > ansmax){ansmax= arr[i];}
    } 

    for (int i = 1; i<n; i++){
        if (arr[i] < ansmin){ansmin = arr[i];}
    }

    int range = ansmax - ansmin;
    cout << range << endl; 

    return 0; 


}