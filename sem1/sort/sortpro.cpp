#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;
using namespace std::chrono;


void printArray(int arr[], int n){
    for (int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//---------------------------------------------------------------------


void bubbleSort(int arr[], int n){
    for (int j=0 ; j<n-1 ; j++){
        for (int i=0 ; i<n-1-j ; i++){
            if (arr[i] > arr[i+1]){
                int t = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = t;
            }
        }
    }
}

//---------------------------------------------------------------------


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


//---------------------------------------------------------------------


void insertionSort(int arr[], int n){
    for (int cur = 1 ; cur < n ; cur++){ //start from 1 instead of 0
        int i = cur - 1;
        int val = arr[cur];
        while ((i >= 0) && (arr[i] > val)){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = val;
    }
}


//---------------------------------------------------------------------



void merge(int arr[], int start, int mid, int end){
    int sz = end - start + 1;
    int z[sz];
    int i = start, j = mid+1, k = 0;

    while (i<=mid && j<=end){
        if (arr[i] < arr[j]){
            z[k] = arr[i];
            i++;
        }
        else{
            z[k] = arr[j];
            j++;
        }
        k++;
    }

    // insert the remaining, if any
    while (i<=mid){
        z[k] = arr[i];
        i++;
        k++;
    }
    while (j<=end){
        z[k] = arr[j];
        j++;
        k++;
    }

    // put it back
    for (int t = 0; t < k ; t++){
        arr[start + t] = z[t];
    }
}

void mergeSort(int arr[], int start, int end){
    if (start < end){
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}



//---------------------------------------------------------------------



int partition(int arr[], int start, int end){
    int left = start, right = end;
    int pivot = arr[right];
    while (true){
        while (left < end && arr[left] <= pivot){
            left++;
        }
        while (right > start && arr[right] >= pivot){
            right--;
        }
        if (left < right){
            int t = arr[left];
            arr[left] = arr[right];
            arr[right] = t;
        }
        else{
            break;
        }
    }
    int t = arr[left];
    arr[left] = arr[end];
    arr[end] = t;

    return left;
}


void quickSort(int arr[], int start, int end){
    if (start < end){
        int pos = partition(arr, start, end);
        quickSort(arr, start, pos-1);
        quickSort(arr, pos+1, end);
    }
}



//---------------------------------------------------------------------

//helper function 
int getMax(int array[], int n){
    int max = array[0];
    for (int i = 1; i < n; i++)
        if (array[i] > max)
            max = array[i];
    return max;
}
 
//helper function
void countSort(int array[], int n, int exp){
    int temp[n]; // output array
    int i, count[10] = { 0 };
 
    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[(array[i] / exp) % 10]++;
 
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    //building the output array
    for (i = n - 1; i >= 0; i--) {
        temp[count[(array[i] / exp) % 10] - 1] = array[i];
        count[(array[i] / exp) % 10]--;
    }
 
    //copying the sorted output array to the previous array
    for (i = 0; i < n; i++)
        array[i] = temp[i];
}
 
//main function
void radixSort(int array[], int n){
    int t = getMax(array, n);
    for (int exp = 1; t / exp > 0; exp *= 10)
        countSort(array, n, exp);
}


//---------------------------------------------------------------------


float calculateSortTime(int array[], int n, int type){
    auto start = high_resolution_clock::now();

    switch(type){
        case 1 : bubbleSort(array,n);
        case 2 : selectionSort(array,n);
        case 3 : insertionSort(array,n);
        case 4 : mergeSort(array,0,n-1);
        case 5 : quickSort(array,0,n-1);
        case 6 : radixSort(array, n);
    }
    
    auto stop =  high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    return duration.count();
    
}


//---------------------------------------------------------------------


int main(){
    srand(time(NULL));
    
    cout << "Elements Quantity : ";
    int n; cin >> n;
    int array[n];
    
    for (int i=0 ; i<n ; i++){
        array[i] = (rand() % 100) + 1;
    }
    
    printArray(array,n); //initial UNSORTED array
    
    int array2[n]; int array3[n]; int array4[n]; int array5[n]; int array6[n]; 
    copy (array, array+n, array2);
    copy (array, array+n, array3);
    copy (array, array+n, array4);
    copy (array, array+n, array5);
    copy (array, array+n, array6);
    
    
    cout << "\nSorting time using BubbleSort method : " << calculateSortTime(array, n, 1) << " microseconds"; 
    cout << "\nSorting time using SelectionSort method : " << calculateSortTime(array2, n, 2) << " microseconds"; 
    cout << "\nSorting time using InsertionSort method : " << calculateSortTime(array3, n, 3) << " microseconds"; 
    cout << "\nSorting time using MergeSort method : " << calculateSortTime(array4, n, 4) << " microseconds"; 
    cout << "\nSorting time using QuickSort method : " << calculateSortTime(array5, n, 5) << " microseconds"; 
    cout << "\nSorting time using RadixSort method : " << calculateSortTime(array6, n, 6) << " microseconds"; 

    return 0;
}



