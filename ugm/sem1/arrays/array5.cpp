#include <iostream>
using namespace std; 

int main(){//existance of a key 
    int n= 10;
    int secondArr[n] = {34, 12, 63, 75, 16, 85, 27, 73, 72, 15};
    cout << "second array" << endl; 
    for (int i = 0; i<n; i++){
        cout << i << " : " << secondArr[i] << endl; 
    }

    int key; 
    cin >> key; 
    bool exist = false; 

    for (int i = 0; i<n; i++){
        if (key == secondArr[i]){exist = true;}
    }

    if (exist == true){cout << "key exists." << endl;}
    else cout << "key non existant" << endl;
    return 0; 

}