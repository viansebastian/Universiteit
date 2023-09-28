#include <iostream>
using namespace std; 

int main(){
    float speed; 
    cout << "enter speed (km/s): "; 
    cin >> speed;

    float distance; 
    cout << "enter distance (m): ";
    cin >> distance; 

    float time = distance/speed; 
    cout << "the time needed is " << time << "s."; 
}