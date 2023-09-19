#include <iostream> 
using namespace std;

int main(){
    int ans = 0;
    int data[20] = {10,25,44,50,41,49,10,15,38,7,45,12,15,41,48,40,44,22,39}; 
    
    for (int i = 1; i < 20; i++){
        int j = i -1; 
        int temp = data[i];

        while((i >= 0) && (data[i] > temp)){
            data[i+1] = data[i];
            i--;
    }
    data[i+1] = temp;
    }

    int a = 0; 
    int b = sizeof(data)/sizeof(data[0]);
    int mid; 
    bool found = false;

    while (!found && a <= b){
        mid = (a+b)/2;
        if (data[mid] < 25){
            a = mid + 1; 
        }
        else if (data[mid] == 25){
            found = true;
        }
        else{
            b = mid -1;
        }
    }
    cout << 20-mid-1; 
}