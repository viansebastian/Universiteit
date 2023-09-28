#include <iostream> 
using namespace std; 

int main(){ 
    int i; 
    int j;
    for (i = 1; i <= 4; i++){ //rows
        for (j = 1; j <= i; j++){ //column 
            cout << "*"; 
        }
    cout << endl; 
    }
}