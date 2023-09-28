#include <iostream> 
#include <ctime>
using namespace std; 

void bubble_sort(int arr[], int n){
    for (int j = 0; j < n-1; j++){
        for (int i = 0; i < n-1-j; i++){
            if(arr[i] > arr[i+1]){
                int t = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = t; 
            }
        }
    }

}

void selection_sort(int arr[], int n){
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

void insertion_sort(int arr[], int n){
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

int main(){
    srand(time(NULL)); //everytime this program runs it will take a new random integers
    int n = 10;
    int arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100 + 1; 
    }

    //before sort
    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    cout << endl; 

//    bubble_sort(arr,n);
//    selection_sort(arr,n); 
    insertion_sort(arr,n);
    //after sort 
    for (int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    return 0; 
}