#include <iostream> 
using namespace std; 

int main(){
    int a; 
    float sum; 

    cout << "how many integers: "; 
    cin >> a; 
    int arr[a]; 

    cout << "Enter the integers separated by space: "; 
    for(int i = 0; i < a; i++){
        cin >> arr[i];
        sum += arr[i]; 
    }
    float avg = sum/a;
    cout << "the average is " << avg; 
    return 0;  

}