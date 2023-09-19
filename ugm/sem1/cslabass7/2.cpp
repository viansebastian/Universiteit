#include <iostream> 
#include <string> 
using namespace std; 

string x(string word, int n){
    int wordsize = word.length(); 
    return word.substr((wordsize-n), n); 
}

int main(){
    string word; 
    int n; 
    cout << "Input word: " ; 
    getline(cin, word);

    cout << "Letters from the right: "; 
    cin >> n; 

    string new = x(word,n); 

    cout << new; 
} 