#include <iostream>
using namespace std; 
// check if a student passes the quiz with the passing grade of 80 

int main(){
    string name; 
    int score; 
    int passing_score = 80; 

    //cin >> name;
    getline (cin, name);  
    cin >> score; 

    if (score >= passing_score){ 
        cout << name << "" << "passed!" << endl; 
    }
        else {
            cout << name << "" << "did not pass! " << endl; 
        }
        
    if (score >= 80) { 
        cout << "A" << endl; 
    }
    else if (score >= 60)
    {
        cout << "B" << endl; 
    }
    else if (score >= 40)
    {
        cout << "C" << endl; 
    }

    else {
        cout << "D" << endl; 
    }
    
    
}