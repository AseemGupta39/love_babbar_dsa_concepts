#include <iostream>
using namespace std;

class Solution {
public:
  int mySqrt(int x) {
    int low = 0, high = x;
    long long int n, mid;
    while (high >= low) {
      mid = low + (high - low) / 2;
      n = mid * mid;
      if (n == x) {
        return mid;
      } else if (n < x) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    return high;
  }
};

double more_precision(int n, int prec, int tempSol) {
        double factor =1;
        double ans = tempSol;
        for(int i=0;i<prec;i++){
            factor=factor/10;
            for(double j=ans;j*j<n;j+=factor){
                ans = j;
            }
        }
    return ans;
}

int main() {
  cout << "program started\n";

  cout << "\nprogram ended\n";
  return 0;
}
