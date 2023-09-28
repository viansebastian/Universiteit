#include <iostream>
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

int main(){
    int n;
    float med; 
    
    cout << "enter amount of integers: "; 
    cin >> n; 
    int arr[n]; 

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubble_sort(arr, n);

    if(n%2 == 1){med = arr[(n)/2];}
    else{med = (arr[(n-1)/2] + arr[n/2])/2;}

    cout <<"median: " << med <<endl; 
    return 0;
}

