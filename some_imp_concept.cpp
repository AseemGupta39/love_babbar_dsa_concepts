#include <iostream>
using namespace std;

#define PI 3.14
#define mul(a,b,c) (a*b*c)

#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

#define ELE 1, \
            2, \
            3



// here we are using refernce variable
// for performance boost
// as here it will use same memory loc
// instead of creating temporary memory space
// for storing parameters
void print(int& a,int& b)
{
    cout << a << " " << b << "\n";
}

inline int getMax(int& a,int& b){
    return (a>b?a:b);
}

int main() {
  cout << "program started\n";
 int a=0,b=1;

    // here this function will get replaced by getMax body
    // maxi = a>b?a:b at time of compilation as this func is inline
    // for performance boost if func body is of 1 line only
    int maxi  = getMax(a, b);
    cout << maxi;

    // Array arr[] with elements
    // defined in macros
    int arr[] = { ELE };
 
    // Print elements
    printf("Elements of Array are:\n");
 
    for (int i = 0; i < 3; i++) {
        printf("%d  ", arr[i]);
    }
    
    
  cout << "\nprogram ended\n";
  return 0;
}
