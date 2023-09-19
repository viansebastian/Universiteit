#include <iostream>
#include <ctime>
using namespace std;

void insertion_sort1(int arr[], int n){
    for (int cur = 1; cur < n; cur++){
        int i = cur-1; 
        int val = arr[cur];
        while ((arr[i] > val) && (i >= 0)){
            arr[i+1] = arr[i];
            i--; 
        }
        arr[i+1] = val; 
    }
}

void insertion_sort2(int arr[], int n){
    for (int cur = 1; cur < n; cur++){
        int i = cur-1; 
        int val = arr[cur];
        while ((arr[i] < val) && (i >= 0)){
            arr[i+1] = arr[i];
            i--; 
        }
        arr[i+1] = val; 
    }
}

void selection_sort1(int arr[], int n){
    for(int pos = 0; pos < n-1; pos++){
        //find min index
        int minIndex = pos; 
        int minValue = arr[pos];
        
        for (int i = pos +1; i < n; i++){
            if (arr[i] < minValue){
                minValue = arr[i];
                minIndex = i; 
            }
        }
        //swap 
        int t = arr[pos];
        arr[pos] = arr[minIndex];
        arr[minIndex] = t; 
    }
}

void selection_sort2(int arr[], int n){
    for(int pos = 0; pos < n-1; pos++){
        //find min index
        int minIndex = pos; 
        int minValue = arr[pos];
        
        for (int i = pos +1; i > n; i++){
            if (arr[i] > minValue){
                arr[i] = minValue;
                i = minIndex; 
            }
        }
        //swap 
        int t = arr[pos];
        arr[minIndex] = arr[pos];
        t = arr[minIndex] ; 
        }
}


int main(){
    srand(time(NULL)); //everytime this program runs it will take a new random integers
    int n;
    cout << "enter number of data: "; 
    cin >> n; 
    int arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100 + 1; 
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    cout << endl; 

    insertion_sort1(arr, n);
    cout << "ascending with insertion sort: " ; 
     for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    cout << endl; 
    
    insertion_sort2(arr, n);
    cout << "descending with insertion sort: "; 
     for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl; 

    selection_sort1(arr, n);
    cout << "ascending with selection sort: "; 
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl; 

    selection_sort2(arr, n);
    cout << "descending with selection sort: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl; 


}