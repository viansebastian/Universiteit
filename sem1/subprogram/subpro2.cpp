#include <iostream>
using namespace std; 

void greet(string name){
    cout << "hello " << name << "!" << endl; 
}

int main(){
    string name; 
    getline (cin, name);
    greet (name);
    
    return 0; 
}