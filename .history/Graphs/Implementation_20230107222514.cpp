#include<iostream>
using namespace std;
#include<list>
#include<unordered_map>
class graph{
public:
   unordered_map<int, list<int>> adj;
   void addEdge(int u, int v, bool direction){
    // direction = 0->undirected
    // direction = 1->directed graph

    // create an edge from u to v
     adj[u].push_back(v);
     if(direction == 0){
        adj[v].push_back(u);
     }
   }
   void printAdjList(){
    for(auto i:adj){
       cout<< i.first <<"->";
       for(auto j: i.second){
        cout<< j << ",";
       }
       cout<<endl;
    }
   }
};
int main(){
int n;
cout<<"Enter the number of edges" <<ebd
return 0;
}