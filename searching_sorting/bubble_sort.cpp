#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    int i,j;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void optimized_bubbleSort(vector<int>& arr, int n)
{   
    int i,j;
    bool swapped;
    for(i=1;i<n;i++){
        swapped = false;
        for(j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}


int main() {
  cout << "program started\n";

  cout << "\nprogram ended\n";
  return 0;
}
