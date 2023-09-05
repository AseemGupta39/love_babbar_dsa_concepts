#include <iostream>
using namespace std;

string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void say(long long n){
    if(n==0){
        return;
    }
    long long digit = n%10;
    n/=10;

    say(n);
    cout << arr[digit] << " ";
}



int main() {
  cout << "program started\n";
    long long num;
    cin >> num;

    say(num);
    
  cout << "\nprogram ended\n";
  return 0;
}
