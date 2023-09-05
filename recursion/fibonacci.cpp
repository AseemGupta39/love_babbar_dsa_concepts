#include <iostream>
using namespace std;

// isme pata nahi refrence variable use karne me problem ho rahi hai;
inline long long factorial(long long n){
    return (n<2)?1: n * factorial(n-1);
}

// isme to sahi chal raha hai
inline long long add(long long& a,long long& b){
    return a+b;
}



int main() {
  cout << "program started\n";
    long long num=5;
    
    cout << factorial(num)<<"\n";
    int n = add(num, num);
    cout << n;
    
  cout << "\nprogram ended\n";
  return 0;
}
