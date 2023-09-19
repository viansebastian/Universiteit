#include <iostream> 
using namespace std;

int sqr(int sqr_int, int sqr_val){
    
   if (sqr_val == 0){return 1;}
   else if (sqr_val > 0){
    return sqr_int * sqr(sqr_int, sqr_val - 1);
   }

   return 0; 
}

int main(){
    int sqr_int = 2; 
    int sqr_val = 6; 

    cout << sqr(sqr_int, sqr_val);

    return 0; 
}