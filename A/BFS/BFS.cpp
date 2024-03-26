#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph{

    int V;

    vector<list<int>> adj;

public:

    Graph(int V);

    void addEdge(int v, int w);

    void BFS(int s);

};

Graph::Graph(int V){

    this->V = V;
    adj.resize(V);

}

void Graph::addEdge(int v, int w)
{

    adj[v].push_back(w);

}


void Graph::BFS(int s){

    vector<bool> visited;
    visited.resize(V, false);


    list<int> queue;

    visited[s] = true;
    queue.push_back(s);

    while(!queue.empty()){

        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for(auto adjacent: adj[s]){
            if(!visited[adjacent]){
                visited[adjacent] = true;
                queue.push_back(adjacent);

            }
        }
    }
}




int main(){

    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,0);
    g.addEdge(0,2);
    g.addEdge(2,0);
    g.addEdge(1,2);
    g.addEdge(2,1);
    g.addEdge(1,3);
    g.addEdge(3,1);
    g.addEdge(3,4);
    g.addEdge(4,3);
    g.addEdge(2,4);
    g.addEdge(4,2);

    g.BFS(3);

}




