#include <iostream>
using namespace std;

#define len(arr) (sizeof(arr)/sizeof(arr[0]))

int partation(int arr[],int s,int e){
 int pivot = arr[s];
    int i,j,cnt=0;
    for(i=s+1;i<=e;i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    // placing pivot at its index
    int pivotIndex = s+cnt;
    swap(arr[s], arr[pivotIndex]);

    i=s,j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
        
    }

    return pivotIndex;
}

void quick_sort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
    int p = partation(arr,s,e);
    quick_sort(arr, s, p-1);
    quick_sort(arr, p+1, e);
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
    quick_sort(arr, 0, n-1);
    
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    delete [] arr;
  cout << "\nprogram ended\n";
  return 0;
}
