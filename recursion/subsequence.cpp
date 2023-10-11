#include <iostream>
#include <vector>
using namespace std;

#define len(arr) (sizeof(arr)/sizeof(arr[0]))

void solve(string &str,string output,int index,vector<string> &ans){
     if(index>=str.length()){
         if(output.length()>0){
         ans.push_back(output);
         }
         return;
     }   
    solve(str, output, index+1, ans);

    output.push_back(str[index]);
    solve(str, output, index+1, ans);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
	string output = "";
    solve(str,output,0,ans);
    return ans;
}



int main() {
  cout << "program started\n";

  
    
  cout << "\nprogram ended\n";
  return 0;
}
