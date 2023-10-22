#include <iostream>
using std::cout;
using std::cin;

inline int get_bit(int &x,int &pos){
    return (x & (1<<pos)) != 0;
}

inline int toggle_bit(int &x,int &pos){
    return (x ^ (1<<pos));
}

inline int set_bit(int &x,int &pos){
    return (x | (1<<pos));
}

inline int unset_bit(int &x,int &pos){
    return (x & (~(1<<pos)));
}

// find out x % 2^k
inline int mod_2k(int &x,int &pow_of_2){
    return x & ((1<<pow_of_2) - 1) ;
}

inline void swap_nums(int &x,int &y){
    x = x^y;
    y = x^y;
    x = x^y;
}


int main(){
    cout << "program started\n";
    
    int n,pos;
    cout << "Enter num and position: \n";
    
    cin >> n >> pos;
    
    cout << get_bit(n,pos) << "\n";
    cout << toggle_bit(n,pos) << "\n";
    cout << set_bit(n,pos) << "\n";
    cout << unset_bit(n,pos) << "\n";
    
    swap_nums(n, pos);
    cout << n << " " << pos << "\n";
    

    cout << "\nprogram ended\n"; 
    return 0;
}