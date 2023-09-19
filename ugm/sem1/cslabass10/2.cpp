#include <iostream> 
using namespace std;

int main(){
    int ans = 0;
    int data[20] = {10,25,44,50,41,49,10,15,38,7,45,12,15,41,48,40,44,22,39}; 
    for (int i = 0; i < 20; i++){
        if (data[i] >= 25){ans += 1;}
    }
    cout <<"data more than 25 (sequential search) : " << ans; 
}