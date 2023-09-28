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
    cout << "enter data amount: "; 
    cin >> n; 

    int data[n];
    cout << ":enter data:"; 
    for (int i = 0; i < n; i++){
        cin >> data[i];
    } 
    bubble_sort(data,n);

    for (int i = 0; i < n; i++){
        cout << data[i] << " ";
    }
    cout << endl; 

    bool found = false;
    int i=0;
    int j = sizeof(data)/sizeof(data[0]);
    int mid, key;
    cout << "Insert key of data: ";
    cin >> key;
    cout << endl;
    while(!found && i<=j){
    mid = (i+j)/2;
    if(data[mid] < key){
    i = mid+1;
    }else if(data[mid] == key){
    found = true;
    }else{
    j = mid-1;
    }
}
if(!found){
cout << "The data is not found";
}else{
cout << "The data is found";
}
}