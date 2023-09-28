#include <iostream>
using namespace std; 

int main(){//second largest..
    int n= 10;
    int secondArr[n] = {34, 12, 63, 75, 16, 85, 27, 73, 72, 15};
    cout << "second array" << endl; 
    for (int i = 0; i<n; i++){
        cout << i << " : " << secondArr[i] << endl; 
    }
    
    int maxans = secondArr[0];
    int secmaxans = secondArr[0]; 

    for (int i = 1; i<n; i++){
        if (maxans < secondArr[i]){
            secmaxans = maxans;
            maxans = secondArr[i];
             } 
    }

     cout << maxans << endl; 
     cout << secmaxans << endl; 
}
   

