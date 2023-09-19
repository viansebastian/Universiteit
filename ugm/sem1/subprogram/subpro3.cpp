#include <iostream> 
using namespace std; 

int balance = 10000; 
void withdraw (double amount){
    if (balance >= amount){
        balance = balance - amount; 
    }
}

int main(){
    withdraw(1000);
    cout << balance << endl;
    return 0; 
}