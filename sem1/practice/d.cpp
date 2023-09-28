#include <iostream>
using namespace std;

int main(){
    int n; 
    int modulo = 1000000007;
    long long f = 1;
    cin >> n; 
    if (n >= 1 && n <= 1000){
        for (int i = 1; i <= n; i++){
            f = f* i%modulo; 
        }
    } 
    cout << f << endl; 
    return 0; 
}