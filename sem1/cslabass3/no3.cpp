#include <iostream> 
using namespace std; 

int main(){
    int month; 
    cout << "enter month (ex. 1 = january):  " << endl; 
    cin >> month; 

    switch (month)
    {
    case 1: 
        cout << "31 days";
        break; 
    case 2: 
        cout << "28 days, 29 in leap year";
        break; 
    case 3: 
        cout << "31 days";
        break;
    case 4: 
        cout << "30 days";
        break;
    case 5: 
        cout << "31 days";
        break;
    case 6: 
        cout << "30 days";
        break;
    case 7: 
        cout << "31 days";
        break;
    case 8: 
        cout << "31 days";
        break;
    case 9: 
        cout << "3o days";
        break;
    case 10: 
        cout << "31 days";
        break;
    case 11: 
        cout << "30 days";
        break;
    case 12: 
        cout << "31 days";
        break;
    }

    return 0; 
}