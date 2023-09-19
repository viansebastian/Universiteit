#include <iostream> 
using namespace std;

int main(){
    int n; 
    cin >> n; 
    int arr[n];
    int a; 

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < n; j++){
            if(i+1==arr[j]){a++;}
            cout << i + 1 << " : " << a << endl; 

    }
}
return 0; 
}


