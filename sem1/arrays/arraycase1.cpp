#include <iostream> 
using namespace std; 

//given a word, compute the number of vocal characters

int main(){
   // string vocalArr[5] = {"a", "i", "u", "e", "o"}; 
    string vocals = "aiueo";
    string word; 
    cout << "enter a word (lowercase): " << endl; 
    cin >> word;

    int ans = 0; 
    for (int i = 0; i < word.length(); i++){ //.length is to define te total "n"
        for (int j = 0; j < vocals.length(); j++){         //a string can be separated by string[index]. a string is automatically an array (?)
            if (word[i] == vocals[j]){  
                ans++; 
            }
        }
    }
    cout << ans << endl; 
}
