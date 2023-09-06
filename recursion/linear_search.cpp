#include <iostream>
using namespace std;

void print(int *arr,int n){
    cout << "size of array is "<< n <<"\n";    
    while(n--){
        cout << *arr << " ";
        arr++;
    }
    cout << "\n";
}

int liner_search(int arr[],int n,int target){
    if(n==0){
        return -1;
    }
    if(arr[n-1]  == target){
        return n-1;
    }
    return liner_search(arr, n-1,target);
    
}

bool linearSearch_pointer(int *arr,int n,int target){
    print(arr,n);
    if(n==0){
        return false;
    }
    if(arr[0]  == target){
        return true;
    }
    return linearSearch_pointer(arr+1,n-1,target);
}

int main() {
  cout << "program started\n";

    int arr[] = {6,5,4,3,2,1};
  int n = 7;
    // cout << liner_search(arr, sizeof(arr)/sizeof(arr[0]),n);
    cout << "\n";
    cout << linearSearch_pointer(arr, sizeof(arr)/sizeof(arr[0]),n);

    
  cout << "\nprogram ended\n";
  return 0;
}
