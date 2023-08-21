#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(int arr[],int n){
    int i,j,temp;

    for(i=1;i<n;i++){

        temp = arr[i];
        
        for(j=i-1;j>=0;j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp; 
    }
}


int main() {
  cout << "program started\n";
    int v[] = {5,4,3,2,1};
    insertion_sort(v, sizeof(v)/sizeof(v[0]));
    for(int i: v){
        cout << i << " ";
    }
  cout << "\nprogram ended\n";
  return 0;
}
