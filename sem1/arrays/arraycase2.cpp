#include <iostream> 
using namespace std; 

int main(){ // word counter 
    string words; 
    getline (cin, words);  

    int ans = 0; 
    int wordCount = 0; 
    char space = ' '; 
    for (int i = 0; i < words.length(); i++){
        if (words[i] == space){ 
            ans++; 
        }
        wordCount = ans + 1; 
    }

    cout << wordCount << endl; 
}