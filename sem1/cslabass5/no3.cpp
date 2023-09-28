#include <iostream> 
using namespace std; 

int main(){
    int n; 
    cout << "array length: " << endl; 
    cin >> n; 

    int arr1[n], arr2[n];

    cout << "Array 1 elements: " << endl; 
    for(int i = 0; i < n; i++){
        cout << "enter element a" << i+1 << ":"; 
        cin >> arr1[i]; 
    }

    cout << "Array 2 elements: " << endl; 
    for(int i = 0; i < n ; i++){
        cout << "enter element b" << i+1 << ": ";
        cin >> arr2[i];
    }

    //print intersections
    cout << "intersections" << endl;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if (arr1[i] == arr2[j]){cout << arr1[i] << endl;}
        }
    }
    return 0; 
}