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

void Graph::addEdge(int v, int w){

    adj[v].push_back(w);
    adj[w].push_back(v);

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

        for(auto a: adj[s]){
            if(!visited[a]){
                visited[a] = true;
                queue.push_back(a);
            }
        }
    }
}

int main(){

    Graph graph(5);

    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,2);
    graph.addEdge(2,3);
    graph.addEdge(3,4);
    graph.addEdge(4,2);

    graph.BFS(0);

}
