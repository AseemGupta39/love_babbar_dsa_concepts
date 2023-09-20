#include <iostream>
using namespace std;


int getSum(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    return arr[n-1] + getSum(arr, n-1);
    
}

int getSum_pointer(int *arr,int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    // return arr[n-1] + getSum(arr,n-1); 
    // or
    return arr[0] + getSum(arr+1,n-1);
}

int main() {
  cout << "program started\n";

    int arr[] = {1,2,3,4,5,6};
  
    cout << getSum(arr, sizeof(arr)/sizeof(arr[0]));
    cout << "\n";
    cout << getSum_pointer(arr, sizeof(arr)/sizeof(arr[0]));

    
  cout << "\nprogram ended\n";
  return 0;
}
