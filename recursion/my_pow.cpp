#include <iostream>
using namespace std;

double my_pow(double base,int exp){
    if(exp==0){
        return 1;
    }
    if(exp==1){
        return base;
    }
    if(exp<0){
        return 1/my_pow(base,-exp);
    }
    if(exp&1){
        return base*my_pow(base*base,exp>>1);
    }
    return my_pow(base*base,exp>>1);  
}

int main() {
  cout << "program started\n";

  long long base,exp;
    cin >> base >> exp;

    cout << my_pow(base,exp);

  cout << "\nprogram ended\n";
  return 0;
}
