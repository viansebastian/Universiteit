#include <iostream> 
using namespace std;

//erorrr mau bikin kotak 
int main(){
    int input;
    cin >> input;
    int length = input;
    int height = input/2;

    for(int i = 0; i < height; i++){
        if(i == 0){
            for(int j = 0; j < length; j++){
                cout<<"*";
            }
        }
        else if(i == height-1){
            for(int j = 0; j < length; j++){
                cout<<"*";
            }
        }

        else{
            cout << "*";
            for(int j = 0; j < length-2; j++){
                cout << " ";
            }
            cout << "*";
        }
    }


    // for (int i = 1; i <= 4; i++){
    //     if (i == 1 || i == 4){
    //         for (int j = 1; j <= 6; j++){cout << "*";}
    //     }
    //     else {
    //         for (int k = 1; k <= 6, k++;){
    //             if (k%2 ==0){cout << " ";}
    //             else {cout << "*";}
    //         }
    //     }
    //     cout << endl;
    // }
    }
