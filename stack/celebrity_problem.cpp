#include <iostream>
#include <stack>
#include <vector>

using std::cin;
using std::cout;
using std::stack;
using std::vector;

void print_stack(stack<int> st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
}



class Solution 
{
    private:
        inline bool knows(vector<vector<int>> &M,int &a,int &b){
            return (M[a][b]==1);
        }
    
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int &n) 
    {
        stack<int> s;
        int i;
        for(int i=0;i<n;i++){
            s.push(i); 
        }
    
        int a,b;
        while(s.size()>1){
            a = s.top();
            s.pop();
            
            b = s.top();
            s.pop();
    
            if(knows(M,a,b)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        
        int candidate = s.top();     
    
        bool row_check=false;
        int zero_count = 0;
        
        for(int i=0;i<n;i++){
            if(M[candidate][i] == 0){
                zero_count++;
            }
        }
    
        row_check = (zero_count == n)? true : false;    
        
        
        bool col_check=false;
        int one_count = 0;
        
        for(int i=0;i<n;i++){
            if(M[i][candidate] == 1){
                one_count++;
            }
        }
    
        col_check = (one_count==n-1) ? true : false;
        
        return (row_check && col_check) ? candidate: -1;
    }
};


int main() {
  cout << "program started\n";

  cout << "\nprogram ended\n";
  return 0;
}