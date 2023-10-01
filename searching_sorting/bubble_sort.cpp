#include <iostream>
#include <vector>

using std::swap;
using std::vector;
using std::cin;
using std::cout;

void print_vec(vector<int>& arr){
    for(const int &i:arr){
        cout << i << " ";
    }
    cout << "\n";
}


void bubbleSort(vector<int>& arr, int &n)
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


void optimized_bubbleSort(vector<int>& arr, int &n)
{   
    int i,j;
    bool swapped;
    for(i=1;i<n;i++){
        print_vec(arr);
        swapped = false;
        for(j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            return;
        }
    }
}


int main() {
  cout << "program started\n";

    int n ;
    cin >> n;

    vector<int> inp(n);

    for(int &i:inp){
        cin >> i;
    }

    optimized_bubbleSort(inp,n);

    for(const int &i:inp){
        cout << i << " ";
    }

  cout << "\nprogram ended\n";
  return 0;
}

// 5
// 97 65 32 21 9