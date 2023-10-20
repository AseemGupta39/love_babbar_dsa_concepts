#include <iostream>
#include <unordered_map>
#include <list>

using std::cout;
using std::cin;
using std::unordered_map;
using std::list;

template <typename T>


class graph{

    public:
        unordered_map<T,list<T>> adj;

        void addEdge(T u,T v,bool direction){
            adj[u].push_back(v);

            if(direction==false){
                adj[v].push_back(u);
            }
        }

        void printAdjList(){
            for(auto i:adj){
                cout << i.first << " -> { ";
                for(auto j:i.second){
                    cout << j << " ";
                }   
                cout << "}\n"; 
            }
        }
};

int main() {
  cout << "program started\n";

    int n;
    cout << "Enter the number of nodes\n";

    cin >> n;

    int m;
    cout << "Enter the number of edges\n";
    
    cin >> m;


    graph<int> g;

    while(m--){
        int u,v;
        cin >> u >> v;
        
        g.addEdge(u,v,0);

    }
    
        g.printAdjList();        

  cout << "\nprogram ended\n";
  return 0;
}

// 5
// 6
// 0 1
// 1 2
// 2 3
// 3 1
// 3 4
// 0 4

