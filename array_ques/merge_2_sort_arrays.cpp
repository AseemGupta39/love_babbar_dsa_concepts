#include <iostream>
// #include <vector>
using namespace std;

void merge(int arr1[],int arr2[],int m,int n,int arr3[]){
    int i=0,j=0,c=0;
    while(i<m && j<n){
        if(arr1[i] <= arr2[j]){
            arr3[c++] = arr1[i++];
        }
        else{
            arr3[c++] = arr2[j++];
        }
    }
    while(i<m){
            arr3[c++] = arr1[i++];
    }
    while(j<n){
            arr3[c++] = arr2[j++];
    }
}


int main() {
  cout << "program started\n";
    int a1[5] = {1,3,5,7,9};
    int a2[3] = {2,4,6};
    int a3[8] = {0};
    merge(a1, a2, sizeof(a1)/sizeof(a1[0]),sizeof(a2)/sizeof(a2[0]) , a3);
    // reverse_array(v, sizeof(v)/sizeof(v[0]));
    for(int i: a3){
        cout << i << " ";
    }
  cout << "\nprogram ended\n";
  return 0;
}
