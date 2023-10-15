#include <iostream>
#include<queue>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
using std::deque;


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    deque<long long int> dq;
    long long int i;
    vector<long long> ans;
    for(i=0;i<K;i++){
        if(A[i] < 0){
            dq.push_back(i);
        }
    }
    
    if(dq.size() > 0){
        ans.push_back(A[dq.front()]); 
    }
    else{
     ans.push_back(0);    
    }

    
    for(i=K;i<N;i++){    
        if((!dq.empty()) && (i - dq.front() >= K) ){
            dq.pop_front();
        }
        
        if(A[i] < 0){
            dq.push_back(i);
        }
        if(dq.size() > 0){
            ans.push_back(A[dq.front()]); 
        }
        else{
         ans.push_back(0);    
        }
    }
    return ans;
 }


int main() {
  cout << "program started\n";


        
  cout << "\nprogram ended\n"; 
  return 0;
}