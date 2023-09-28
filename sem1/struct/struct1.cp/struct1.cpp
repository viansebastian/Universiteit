#include <iostream> 
using namespace std; 

struct fruit {
    string name, color; 
    int price; 
    float weight; 
};

int main(){

    fruit apple; 
    cout << "name: "; 
    getline (cin, apple.name); 
    cout << "color: "; 
    getline (cin, apple.color); 
    cout << "weight: "; 
    cin >> apple.weight; 
    apple.price = apple.weight * 20; 

    
    cout << apple.name << endl; 
    cout << apple.color << endl; 
    cout << apple.weight << endl; 
    cout << apple.price << endl; 
    return 0; 
}