#include <iostream> 
#include <algorithm>
using namespace std;

struct Student {
        int studentID; 
        string name; 
        int score; 
    }person; 

bool comp (person a, person b) {
    if (a.studentID < b.studentID) {return 1;}
    else {return 0;}
}
int main(){
    bool found = false;
    string key; 

    Student studentList[] = {{408599, "Cecilio Schubart", 93}, {403189, "Desiri Chalker", 90},{405462, "Falkner Carder", 75}, {406703, "Delainey Ruckhard",89}, {400324, "Collette Abramovic", 92}, {404342, "Irwinn Bussey", 81}, {409504, "Terrie Whitaker", 83}, {401339, "Gary Binestead", 77}, {405509, "Ferris Fulbrook", 91}, {400522, "Diane Bissil", 77}, {404878, "Ricoriki Jiroutka", 93}, {40353, "Reidar Putten", 89}
    };

    sort(studentList, studentList+20, comp);

    for(int i = 0; i < 20; i++){
        cout << studentList[i].studentID << " " << studentList[i].name << " " << studentList[i].score; 
    }

     /*PseudoCode 
     input libraries 
     using namespace std; 

     declare struct for student lists; 
     declare function for sorting; 

     int main; 

     input student lists in the struct; 
     sort the struct based on ID using the sorting function; 

     input the ID searched; 

     print sorted student lists; 
     output the results, whether or not it is found or not; 
     
     return 0; 
     */
}

