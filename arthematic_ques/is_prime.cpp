#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n){
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    int i,s = sqrt(n);
    for(i=3;i<s+1;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
  cout << "program started\n";

  int n;
  cin >> n;

    cout << is_prime(n);

  cout << "\nprogram ended\n";
  return 0;
}
