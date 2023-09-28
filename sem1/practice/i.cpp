#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n; 
    int arr[n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(arr[j] < arr[i]){
                int a = arr[j];
                arr[j] = arr[i];
                arr[i] = a;

            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i]; 
        if(i != n-1){
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}