#include <iostream> 
using namespace std; 

int main(){
    int a[4], b[4], c[4];
    int n;

    cout << "Enter elements for matrix1: " << endl; 
    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <= 2; j++){
            cout << "enter element a " << i << j << " : "; 
            cin >> a[n];
            n++;
        }
    }

    n = 0; 
    cout << "Enter elements for matrix2: " << endl; 
    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <= 2; j++){
            cout << "enter element b " << i << j << " : "; 
            cin >> b[n];
            n++;
        }
    }

    c[0] = a[0] + b[0] + a[1] + b[2];
    c[1] = a[0] + b[1] + a[1] + b[3];
    c[2] = a[2] + b[0] + a[3] + b[2];
    c[3] = a[2] + b[1] + a[3] + b[3];

    cout << "matrix1 : " << endl; 
    for(int i = 0; i < 4; i++){
        if(a[i] < 0){cout << "  "};
        else {cout "  "};
        cout << a[i];
        if (i%2 == 1){cout << endl}; 
    }

    cout << "matrix2 : " << endl; 
    for(int i = 0; i < 4; i++){
        if(b[i] < 0){cout << "  "};
        else {cout "  "};
        cout << b[i];
        if (i%2 == 1){cout << endl}; 
    }

    cout << "output matrix : " << endl; 
    for(int i = 0; i < 4; i++){
        if(c[i] < 0){cout << "  "};
        else {cout "  "};
        cout << c[i];
        if (i%2 == 1){cout << endl}; 
    }
    return 0; 
}