#include <iostream> 
#include <cmath> 
using namespace std; 

int main(){
    float a, b, c, D, x1, x1; 
    cin >> a >> b >> c; 
    D = (b*b) - (4*a*c);

    if (D>0){
        x1 = ((-1)*b + sqrt(D)) / (2*a);
        x2 = ((-1)*b - sqrt(D)) / (2*a);
        cout << "the roots are: " << x1 << " " << "and" << " " << x2 << endl; 
    }
    else if (D==0){
        x1 = x2 = ((-1)*b) / (2*a);
        cout << "the roots are: " << x1 << " " << "and" << " " << x2 << endl; 
    }
    else if (D<0){
        x1 = ((-1)*b) / 2*a +sqrt(abs(-D)) / (2*a);
        x2 = ((-1)*b) / 2*a -sqrt(abs(-D)) / (2*a);
        cout << "the roots are (imaginary): " << x1 << "i" << " " << "and" << " " << x2 << "i" << endl;
    }

    return 0;
}