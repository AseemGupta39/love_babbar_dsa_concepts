#include <iostream>
#include <string>
using namespace std;

string replaceSpaces(string &str) {
  string ans;
  for (char i : str) {
    if (i == ' ') {
      // ans += "@40";
      ans.append("@40");
    } else {
      // ans += i;
      ans.push_back(i);
    }
  }
  return ans;
}

int main() {
  cout << "program started\n";

  string test = "this is a test sample";
  string ans = replaceSpaces(test);
    
  cout << ans;
  cout << "\nprogram ended\n";
  return 0;
}
