#include <iostream>
using namespace std; 

float calculate_ga(float sks[], char score[], int n){
    float skstotal;
    float scoretotal;

    for (int i = 0; i < n; i++){
        if (score[i] == 'A'){scoretotal = scoretotal+ 4*sks[i];}
        else if (score[i] == 'B'){scoretotal = scoretotal+ 3*sks[i];}
        else if (score[i] == 'C'){scoretotal = scoretotal + 2*sks[i];}
        else {scoretotal = scoretotal + sks[i];}

        skstotal = skstotal +sks[i];
    }
    return scoretotal/skstotal;
}

int main(){
    int a; 
    cout << "number of subjects: "; 
    cin >> a; 

    char score[a];
    float sks[a];
    cout << endl; 

    cout << "Scores: "; 
    for (int i = 0; i < a; i++){
        cin >> score[i]; 
    }
    cout << endl; 

    cout << "SKS per subject: "; 
    for (int i = 0; i < a; i++){
        cin >> sks[i]; 
    }

    cout << "Student's GPA: " << calculate_ga(sks, score,a); 

}