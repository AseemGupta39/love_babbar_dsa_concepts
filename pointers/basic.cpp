#include <iostream>
using namespace std;

void getSum(int *arr,int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
        sum+=arr[i];
    }
    cout <<"\nsum is: "<< sum << "\n";
}

void print(int *p){
    cout << *p << "\n";
}

void update(int *p){
    // p=p+1;
    *p = *p+ 1;
}

int main() {
  cout << "program started\n";
    int val = 5;
    int *ptr = &val;

    // cout << "value of val: " << ptr << "\n"; 
    // update(ptr);
    // cout << "value of val: " << ptr << "\n"; 
    
    // cout << "value of val: " << *ptr << "\n"; 
    // update(ptr);
    // cout << "value of val: " << *ptr << "\n";


    int arr[] = {1,2,3,14,15,16};
    getSum(arr+3, 6-3);
    
    
  cout << "\nprogram ended\n";
  return 0;
}
