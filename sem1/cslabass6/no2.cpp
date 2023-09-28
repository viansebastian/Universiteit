#include <iostream> 
using namespace std; 

struct student {
    int id; 
    float midterm_score; 
    float finalexam_score; 
    float average; 
}; 

int main(){
    student a; 
    int n; 
    cout << "Number of students: " ; 
    cin >> n; 
    student arr[n];
    for (int i = 0; i < n; i++){
        cout << "Student ID: "; 
        cin >> a.id; 
        cout << "Midterm score: "; 
        cin >> a.midterm_score;
        cout << "Final Exam score: "; 
        cin >> a.finalexam_score; 
        a.average = (a.midterm_score + a.finalexam_score)/2; 
        arr[i] = a; 
    }
    
    cout << endl; 
    cout << "Result: " << endl; 
    for (int i = 0; i < n; i++){
        cout << "Student ID: " << arr[i].id << endl; 
        cout << "Score Average: " << arr[i].average << endl; 
    }
    return 0; 
}