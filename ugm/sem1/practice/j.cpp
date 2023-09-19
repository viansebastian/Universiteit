#include <iostream>
using namespace std; 

void selectionSort(int arr[], int n){
    for (int pos = 0; pos < n-1 ; pos++){
        // find the minimum index
        int minIndex = pos;
        int minValue = arr[pos];
        for (int i=pos+1; i<n ; i++){
            if (arr[i] < minValue){
                minValue = arr[i];
                minIndex = i;
            }
        }
        // swap
        int t = arr[pos];
        arr[pos] = arr[minIndex];
        arr[minIndex] = t;
    }
}

int main(){
    int n;
    cin >> n;
    if (n < 2){cout << "Error"}
    int arr[n];
    int result = arr[n-1] * arr[n-2];
    cout << result << endl;
    return 0; 
}