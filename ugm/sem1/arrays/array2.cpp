#include <iostream> 
using namespace std; 

int main(){
    int n; 
    cin >> n; 
    int thirdArr[n];
    for (int i = 0; i<n; i++){cin >> thirdArr[i];}
    cout << "third array" << endl; 

    for (int i = 0; i<n; i++){
        cout << i << " : " << thirdArr[i] << endl; 
    }
    return 0; 


}