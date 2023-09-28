#include <iostream> 
using namespace std;

string a; 
void PalorNot(string a){
    int length = a.length();

    if(length <= 1){
        cout << "Palindrome" << endl; 
    }

    else if((a.at(0)) == a.at(length -1)){
        a = a.substr(1, a.(length-2)); 
        PalorNot(a);
    }
    else{cout << "not a palindrome" << endl;}
}

int main(){
    cout << "input a word : " ; 
    cin >> a; 

    PalorNot(a); 
        return 0;
    
}