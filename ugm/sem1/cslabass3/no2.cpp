#include <iostream> 
using namespace std; 

int main(){
    int birth_date, birth_month;

    cout << "enter birth month (ex. 1 is january): " << endl; 
    cin >> birth_month; 

    cout << "enter birth date: " << endl;
    cin >> birth_date; 

    if(birth_month == 3 && birth_date >= 21 || birth_month == 4 && birth_date <= 19)
    {cout << "You are an Aries." << endl;}
    else if (birth_month == 4 && birth_date >= 20 || birth_month == 5 && birth_date <= 20)
    {cout << "You are a Taurus." << endl;}
    else if (birth_month == 5 && birth_date >= 21 || birth_month == 6 && birth_date <= 20)
    {cout << "You are a Gemini." << endl;}
    else if (birth_month == 6 && birth_date >= 21 || birth_month == 7 && birth_date <= 22)
    {cout << "You are a Cancer." << endl;}
    else if (birth_month == 7 && birth_date >= 23 || birth_month == 8 && birth_date <= 22)
    {cout << "You are a Leo." << endl;}
    else if (birth_month == 8 && birth_date >= 23 || birth_month == 9 && birth_date <= 22)
    {cout << "You are a Virgo" << endl;}
    else if (birth_month == 9 && birth_date >= 23 || birth_month == 10 && birth_date <= 22)
    {cout << "You are a Libra"}
    else if (birth_month == 10 && birth_date >= 23 || birth_month == 11 && birth_date <= 21)
    {cout << "You are a Scorpio." << endl;}
    else if (birth_month == 11 && birth_date >= 22 || birth_month == 12 && birth_date <= 21)
    {cout << "You are a Sagittarius." << endl;}
    else if (birth_month == 12 && birth_date >= 22 || birth_month == 1 && birth_date <= 19)
    {cout << "You are a Capricorn." << endl;}
    else if (birth_month == 1 && birth_date >= 20 || birth_month == 2 && birth_date <= 18)
    {cout << "You are an Aquarius" << endl;}
    else
    {cout << "You are a Pisces"}

    return 0; 
}