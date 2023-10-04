#include <iostream>
#include <stack>
#include <vector>

using std::cin;
using std::cout;
using std::stack;
using std::vector;
using std::max;

void print_stack(stack<int> st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
}

vector<int> next_smaller_ele(vector<int> &arr, int &n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
  
    int i;
    for(i=n-1;i>=0;i--){
   
        
        while(st.top()!=-1 && arr[st.top()]>=arr[i]){
            st.pop();
        }

        ans[i] = (st.empty()) ? -1 : st.top();
        st.push(i);
    }

    return ans;
}

vector<int> prev_smaller_ele(vector<int> &arr, int &n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
  
    int i;
    for(i=0;i<n;i++){
   
        while(!st.empty() && st.top()!=-1 && arr[st.top()]>=arr[i]){
            st.pop();
        }

        ans[i] = (st.empty()) ? -1 : st.top();
        st.push(i);
    }

    return ans;
}

int largest_area(vector<int> &arr){
    int n = arr.size();
    
    vector<int> next(n);
    next = next_smaller_ele(arr,n);
    
    vector<int> prev(n);
    prev = prev_smaller_ele(arr,n);

    int i,length,breadth,area,max_area=0;

    for(i=0;i<n;i++){
        length = arr[i];
        next[i] = next[i]==-1 ? n : next[i];
        breadth = next[i] - prev[i] - 1;

        area = length*breadth;
        max_area = max(area,max_area);
    }
    
    return max_area;
}

int main() {
  cout << "program started\n";
    // vector<int> heights = {2,1,5,6,2,3};
    vector<int> heights = {2,4};

    cout << largest_area(heights);

  cout << "\nprogram ended\n";
  return 0;
}