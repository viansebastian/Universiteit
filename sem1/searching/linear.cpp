#include <iostream> 
using namespace std; 

//linearSearch cari satu2 kyk bubble sort
void linearSearch(int a[], int first, int last, int target){
    for (int i = first; i <= last; i++){
        if (a[i] == target){
            return i; 
        }
    }
    return -1; //data not found
}

int main(){
    int data[] = {46, 67, 41, 73, 89, 22, 53, 72}, n = 8; 
    int target; 
    cout << "input data searched: " ; 
    cin >> target; 

    int index = linearSearch(data, 0, n - 1, target);
    if (index == -1){
        cout << target << " is not found" << endl;
    }
    else{
        cout << target << " is found at index " << index << endl;
    }
    return 0; 

}