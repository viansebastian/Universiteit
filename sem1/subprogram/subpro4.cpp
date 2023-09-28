#include <iostream> 
using namespace std; 

void swap(int x, int y){
    int temp = x; 
    x = y; 
    y = temp; 
}

void swap2(int& x, int& y){
    int temp = x; 
    x = y; 
    y = temp; 
}

int main(){
    int a = 10, b = 5; 
    swap(a, b);
    cout << a << " " << b << endl; 
    swap2(a, b);
    cout << a << " " << b << endl; 

    return 0; 
}