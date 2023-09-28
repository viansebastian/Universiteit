#include <iostream>
using namespace std; 

struct zodiac {
        string name; int datebegin, datend, monthr1, monthr2; 
    };

int main(){
    zodiac zod; 
    zodiac mon[12];
    string zod_names[] = {"Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn", "Aquarius", "Pisces"};
    int range1[] = {21,20,21,21,23,23,23,23,22,22,20,19};
    int range2[] = {19,20,20,22,22,22,22,21,21,19,18,20};
    int monthrange1 = 3; 

    for (int i = 0; i < 12 < i++;){
        zod.name = zod_names[i];
        zod.datebegin = range1[i];
        zod.datend = range2[i];
        zod.monthr1 = monthrange1;
        if (monthrange1 == 12){monthrange1 = 1;}
        else {monthrange1 += 1;}
        zod. monthr2 = monthrange1; 
    };
    
    int bdate, bmonth; 
    cout << "Birth month: " ; 
    cin >> bmonth; 
    cout << "Birth date: " ;
    cin >> bdate; 

    for (int i = 0; i < 12; i++){
        zodiac zod = mon[i]; 
        if (bmonth == zod.monthr1 && bdate >= zod.datebegin || bmonth == zod.monthr2 && bdate <= zod.datend){
            cout << "You are a " << zod.name;
            break; 
        }
    };
    return 0; 
}