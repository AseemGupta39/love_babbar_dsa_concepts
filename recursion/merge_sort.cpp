#include <iostream>
using namespace std;

#define len(arr) (sizeof(arr)/sizeof(arr[0]))

void merge(int *arr,int &s,int &e){
    int mid = s + (e-s)/2;
    int len1= mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int i,main_array_index = s;
    for(i=0;i<len1;i++){
        first[i] = arr[main_array_index++];
    }
    
    for(i=0;i<len2;i++){
        second[i] = arr[main_array_index++];
    }

    int index1=0,index2 = 0;
    main_array_index =s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] <second[index2]){
            arr[main_array_index++] = first[index1++];
        }
        else{
            arr[main_array_index++] = second[index2++];
        }
    }
    while(index1<len1){
        arr[main_array_index++] = first[index1++];
    }
    while(index2<len2){
        arr[main_array_index++] = second[index2++];
    }    
    delete [] first;
    delete [] second;
}


void merge_sort(int *arr,int s,int e){
    // base case
    if(s>=e){
        return ;
    }
    
    int mid = s + (e-s)/2;
    // left sort
    merge_sort(arr, s, mid);
    // right sort
    merge_sort(arr, mid+1, e);
    // merge arrays
    merge(arr,s,e);
}

int main() {
  cout << "program started\n";

    // int arr[] = {9,5,1,3,7,8,2,6,4};
    // int n = len(arr);
    int n;
    cin >> n;
    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    merge_sort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    delete [] arr;
  cout << "\nprogram ended\n";
  return 0;
}
