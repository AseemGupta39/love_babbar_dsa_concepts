#include <iostream>
using std::cin;
using std::cout;


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

unsigned long long sq_num(long long &n){
    if(n==0){
        return 0;
    }

    if(n<0){
        n = -n;
    }

    long long x = n >> 1;

    return (n & 1) ? ((sq_num(x) << 2) + (x << 2) + 1):(sq_num(x) << 2);
}

int main() {
  cout << "program started\n";

  // long long base,exp;
    // cin >> base >> exp;

    // cout << my_pow(base,exp);

    long long n;
    cin >> n;
    
    // while(n--)
    printf("%llu\n",sq_num(n));
    // cout << sq_num(n) << "\n";
    
  cout << "\nprogram ended\n";
  return 0;
}
