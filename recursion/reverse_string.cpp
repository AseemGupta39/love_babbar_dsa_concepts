#include <iostream>
#include <string>
using namespace std;

void reverse_string(string &str,int s,int e){
    if(s>e){
        return;
    }
    swap(str[s],str[e]);
    reverse_string(str, s+1, e-1);
}

void reverse_string_single_variable(string &str,int e){
    if((e<<1)>str.length()-1){
        return;
    }
    swap(str[e],str[str.length()-e-1]);
    reverse_string_single_variable(str, e+1);
}

int main() {
  cout << "program started\n";

    string s;
    cin >> s;

    reverse_string(s, 0, s.length()-1);
    cout << s << "\n";
    reverse_string_single_variable(s,0);
    cout << s << "\n";
    

  cout << "\nprogram ended\n";
  return 0;
}
