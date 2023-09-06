#include <iostream>
using namespace std;


bool isSorted(int arr[],int n){
    if(n==1 || n==0){
        return true;
    }
    if(arr[n-1]>arr[n-2]){
        return isSorted(arr,n-1);
    }
    return false;
}

bool isSorted_pointer(int *arr,int n){
    if(n==1 || n==0){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    return isSorted(arr+1,n-1);
}

int main() {
  cout << "program started\n";


    int arr[]={1,2,3,4,5,7,8,9};
    cout << isSorted(arr, sizeof(arr)/sizeof(arr[0]));
    cout << isSorted_pointer(arr, sizeof(arr)/sizeof(arr[0]));
    
  cout << "\nprogram ended\n";
  return 0;
}
