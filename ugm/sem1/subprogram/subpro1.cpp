#include <iostream> 
using namespace std; 

int getMax (int a, int b){
    int largest; 
    if (a > b) largest = a; 
    else largest = b; 
    return largest; 
}

int main(){
    int x, y; 
    cin >> x >> y; 
    int r = getMax(x,y);
    cout << r << endl; 

    return 0; 
}