#include <iostream>
using namespace std; 

int main(){
    int female, male; 
    cout << "input male: ";
    cin >> male;
    cout << "input female: ";
    cin >> female;

    // int middle = (input+1)/2; 

    int male_modulo = male % 5;
    int female_modulo = female % 5;
    int male_ceil = ceil(male/5) + 1;
    int female_ceil = ceil(female/5) + 1;

    // cout << "male ceil: " << male_ceil << endl;
    // cout << "female ceil: " << female_ceil << endl;

    for(int i = 0; i < max(male_ceil, female_ceil); i++){
        for(int j = 0; j < 5; j++){
            if(female_modulo > 0 && female_ceil > male_ceil){
                for(int temp = 0; temp < female_modulo; temp++){
                    cout << "#";
                }

            }else{
                cout << "a";
            }
            female_modulo--;
        }
        cout << " ";
        for(int k = 0; k < 5; k++){
            if(male_modulo > 0 && female_ceil < male_ceil){
                for(int temp = 0; temp < male_modulo - 1; temp++){
                    cout << "#";
                }

            }else{
                cout << "a";
            }
            male_modulo--;
        }
        cout << endl;
    }
    cout << "-----------" << endl;
    cout << "   F   M   ";
    
}