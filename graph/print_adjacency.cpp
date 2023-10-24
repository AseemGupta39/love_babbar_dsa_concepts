#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;



// isme error check karna hai
vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    
    vector<int> ans[n];
    vector<vector<int>> adj(n);

    for(int i=0;i<m;i++){
        
        int u,v;
        
        u = edges[i][0];
        v = edges[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);        
        
    }

    for(int i=0;i<n;i++){
        adj[i].push_back(i); 

        for(int j=0;j<ans[i].size();j++){
            adj[i].push_back(ans[i][j]);
        }
    }

}



int main() {
  cout << "program started\n";

           

  cout << "\nprogram ended\n";
  return 0;
}


