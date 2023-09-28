#include <iostream>
using namespace std; 

int sqr(int x, int n){
    if(n == 0){return 1;}
    else if(n%2 != 0 ){return x * sqr(x, (n-1)/2) * sqr(x, (n-1)/2);}
    else {return sqr(x, n/2) * sqr(x, n/2);}
}

int main(){
    int x, n; 
    cin >> x >> n; 
    cout << sqr(x, n) << endl; 
    return 0; 
}