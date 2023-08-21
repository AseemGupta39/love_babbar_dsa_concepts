#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   int i,j,min_index;
    for(i=0;i<n;i++){
        min_index = i;
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

int main() {
  cout << "program started\n";

  cout << "\nprogram ended\n";
  return 0;
}
