#include <iostream>
using namespace std; 

// use a bubble sort to sort an array of ten integers
int main(){
    int size = 10;
    int n = size;
    int arr[size] = {30, 45, 8, 204, 165, 95, 28, 180, 110, 40};
      
    for (int i=0 ; i<n ; i++){
        cout << arr[i] << " ";    }
        cout << endl; 
    
    while (size >= 1){
        for (int i = 0; i < size - 1; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp; 
            }
        }
        size--; 
    }
    
    for (int i=0 ; i<n ; i++){
        cout << arr[i] << " " ;   
        }

}