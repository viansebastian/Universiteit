#include <iostream> 
using namespace std; 

int main(){
    float hour1; 
    cout << "input hour 1: "; 
    cin >> hour1; 

    float min1; 
    cout << "input minute 1: "; 
    cin >> min1; 

    float hour2; 
    cout << "input hour 2: "; 
    cin >> hour2; 

    float min2; 
    cout << "input minute 2: "; 
    cin >> min2; 

    int time1 = hour1*60 + min1; 
    int time2 = hour2*60 + min2; 
    int time_difference; 

    if (time1>time2){time_difference = time1 - time2;}
     else {time_difference = time2 - time1;}

    cout << "the time difference is " << time_difference << " mins."; 
}