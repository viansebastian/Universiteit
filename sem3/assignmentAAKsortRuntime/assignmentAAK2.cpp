#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <chrono> 
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

void generateDescending(int arr[], int n){
    for (int i = 0; i < n; i++){
        arr[i] = n - i; 
    }
}

int main() {

    srand(time(0));

    int n_values[] = {10000, 100000, 500000};
    int numRuns = sizeof(n_values) / sizeof(n_values[0]);

    for (int i = 0; i < numRuns; i++) {
        int numNumbers = n_values[i];

        int arr[numNumbers];

        generateDescending(arr, numNumbers);

        auto bubbleStart = chrono::high_resolution_clock::now();
        bubble_sort(arr, numNumbers);
        auto bubbleEnd = chrono::high_resolution_clock::now();
        chrono::duration<double> bubbleElapsed = bubbleEnd - bubbleStart;
        cout <<  "bubble sort time: " << bubbleElapsed.count() << " seconds" << endl; 

        auto selectionStart = chrono::high_resolution_clock::now();
        selection_sort(arr, numNumbers);
        auto selectionEnd = chrono::high_resolution_clock::now();
        chrono::duration<double> selectionElapsed = selectionEnd - selectionStart;
        cout << "selection sort time: " << selectionElapsed.count() << " seconds" << endl;
    }

    return 0;
}
