#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> a){
    int s = 0;
    int e = a.size() -1;
     while(s<e){
         swap(a[s++], a[e--]);
     }
}


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
	int i=n-1;
    int j=m-1;
    int c = max(m,n)-1;
    vector<int> ans(c);
    int sum = 0;
    int carry = 0;
    int  lim=0;

    while(i>=0 && j>=0){
        sum = a[i--] + b[j--] + carry;
        carry = sum/10;
        if(lim<=c){
        ans[lim++] = sum%10;
            }
        else{
            ans.push_back(sum%10);   
        }
            
            // ans.push_back(sum%10);
    }

    while(i>=0){
        sum = a[i--] + carry;
        carry = sum/10;
        // ans[c--] = sum%10;
        
        if(lim<=c){
        ans[lim++] = sum%10;
            }
        else{
            ans.push_back(sum%10);   
        }
        // ans.push_back(sum%10);
    }

    while(j>=0){
        sum = a[j--] + carry;
        carry = sum/10;
        if(lim<=c){
        ans[lim++] = sum%10;
            }
        else{
            ans.push_back(sum%10);   
        }
        // ans[c--] = sum%10;
        // ans.push_back(sum%10);
    }

    while(carry!=0){
        sum = carry;
        carry = sum/10;

        if(lim<=c){
        ans[lim++] = sum%10;
            }
        else{
            ans.push_back(sum%10);   
        }
        // ans.push_back(sum%10);
    }

    return reverse(ans);

    
        
}


int main() {
  cout << "program started\n";

  cout << "\nprogram ended\n";
  return 0;
}
