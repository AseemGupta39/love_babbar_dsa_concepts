#include <iostream>
using namespace std;

int my_pow(int base,int exp)
{
    if(exp==0 && base!=0){
        return 1;
    }
    if(exp==1){
        return base;
    }
    
    bool is_negitive = false;
    
    if(exp<0){
        is_negitive = true;
        exp=exp*-1;
    }

    int ans = 1;
    
    while(exp!=0){
        if (exp%2!=0){
            ans = ans * base;
        }
        base = base*base;
        exp/=2;
    }
    
    if(is_negitive==true){
        return 1/ans;
    } 
    return ans;
    
}

int main() {
  cout << "program started\n";

  int base,exp;
  cin >> base >> exp;

    cout << my_pow(base,exp);

  cout << "\nprogram ended\n";
  return 0;
}
