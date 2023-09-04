#include <iostream>
#include <string>
using namespace std;


bool is_palindrone(string &str,int s,int e){
    if(s>e){
        return true;
    }
    if(str[s] == str[e]){
        return is_palindrone(str, s+1, e-1);
    }
    return false;
}

int main() {
  cout << "program started\n";

    string s;
    cin >> s;


    cout << s << " is palindrone or not: " << is_palindrone(s,0,s.length()-1) <<  "\n";


    

  cout << "\nprogram ended\n";
  return 0;
}
