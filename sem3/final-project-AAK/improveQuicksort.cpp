#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <chrono>

using namespace std;

vector<int> partition3(vector<int> &a, int l, int r) { 

int mid = l;
vector<int> _result(2);
while(mid <= r) {
  if(a[mid] < a[l])  {
    swap(a[mid], a[l]);
    ++l;
    ++mid;
  }else if(a[mid] == a[l]) {
    ++mid;
  }else { 
    swap(a[r], a[mid]);
    --r;
  }
}

_result[0] = l;
_result[1] = mid;

return _result;
}

void randomized_quick_sort(vector<int> &a, int l, int r) {
  if (l >= r) {
    return;
  }

  int k = l + rand() % (r - l + 1);
  swap(a[l], a[k]);
  vector<int> p = partition3(a, l, r);
  randomized_quick_sort(a, l, p[0]);
  randomized_quick_sort(a, p[1], r);
}

void quick_sort(vector<int> &a, int l, int r) {
  if (l >= r) {
    return;
  }
  
  int m = l;
  for (int i = l + 1; i <= r; ++i) {
    if (a[i] < a[l]) {
      ++m;
      swap(a[i], a[m]);
    }
  }
  swap(a[l], a[m]);

  quick_sort(a, l, m - 1);
  quick_sort(a, m + 1, r);
}

int main() {
    int n;
    cin >> n;
    vector<int> originalArray(n);

    // Generate random integers and fill the array
    for (size_t i = 0; i < originalArray.size(); ++i) {
        originalArray[i] = rand() % 100; 
    }

    vector<int> randomizedArray = originalArray;

    auto start_time = chrono::high_resolution_clock::now();
    randomized_quick_sort(randomizedArray, 0, randomizedArray.size() - 1);
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time);

    cout << "\nTime taken by Randomized Quicksort: " << duration.count() << " microseconds";

    // Apply default quicksort to the unsorted array
    start_time = chrono::high_resolution_clock::now();
    quick_sort(originalArray, 0, originalArray.size() - 1);
    end_time = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time);

    cout << "\nTime taken by Default Quicksort: " << duration.count() << " microseconds\n\n";

    return 0;
}