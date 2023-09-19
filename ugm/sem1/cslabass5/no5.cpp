#include <iostream> 
using namespace std; 

int main(){
    int n, a; 

    cout << "integers count: " ; 
    cin >> n; 

    if (n > 100){cout << "too many integers!"};
    else if (n < 1){cout << "enter a positive integer!"}

    int arr[n];

    cout << "enter integers separated by space. " << endl; 
    for (int i = 0; i < n; i++){
        cin >> arr[i]; 
        if (arr[i] < -100 || arr[i] > 100){
            cout << "over integer limit. " << endl; 
        }

        for (int i = 1; i <= 100; i++){
            bool exist = true; 
        for (int j = 0; j < n; j++){
            if (arr[j == i]){
                exist = false;
                break; 
            };
        }
        if(exist){a = i;
        break; 
        }
        if (a == 0){
            cout << "not found"; 
        }
        }
    }
}