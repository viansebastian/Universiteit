#include <iostream> 
#include <algorithm>
using namespace std;

int binarySearch(int a[], int first, int last, int target){
    if (first > last)
        return -1; //not found
    else {
    int middle = (first + last)/2;
        if(target == a[middle])
        return middle;
        else if (target < a[middle])
    // target is less than middle, so search subarray before middle
    return binarySearch(a, first, middle-1, target);
    else
    // target is greater than middle, so search subarray after middle
    return binarySearch(a, middle+1, last, target);
}
}