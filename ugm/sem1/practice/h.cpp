#include <iostream> 
using namespace std;

int main(){
    int n; 
    cin >> n; 
    int arr[n];
    int a = 1; 

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(a == arr[i]){
            i = 0; 
            a++; 
        }
    }
    cout << a << endl; 
    return 0; 
}