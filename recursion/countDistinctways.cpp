#include <iostream>
using namespace std;

int countDistinctWays(int nStairs) {
    if (nStairs<0){
        return 0; 
    }
    if(nStairs == 0){
        return 1;
    }
    return countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
}



int main() {
  cout << "program started\n";
    int num;
    cin >> num;

    cout << countDistinctWays(num);
    
  cout << "\nprogram ended\n";
  return 0;
}
