#include <iostream>
using namespace std;

#define len(arr) (sizeof(arr)/sizeof(arr[0]))

void bubble_sort(int *arr,int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr, n-1);
}

int main() {
  cout << "program started\n";

    int arr[] = {5,3,1,4,9,7,6,2,8};
    bubble_sort(arr, len(arr));
    for(int i :arr){
        cout << i << " ";
    }


  cout << "\nprogram ended\n";
  return 0;
}
