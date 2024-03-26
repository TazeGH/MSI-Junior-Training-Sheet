// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the level of the given node
int findLevel(int N, vector<vector<int> >& edges, int X)
{

	// Variable to store maximum vertex of graph
	int maxVertex = 0;
	for (auto it : edges) {
		maxVertex = max({ maxVertex, it[0], it[1] });
	}

	// Creating adjacency list
	vector<int> adj[maxVertex + 1];
	for (int i = 0; i < edges.size(); i++) {
		adj[edges[i][0]].push_back(edges[i][1]);
		adj[edges[i][1]].push_back(edges[i][0]);
	}

	// If X is not present then return -1
	if (X > maxVertex || adj[X].size() == 0)
		return -1;

	// Initialize a Queue for BFS traversal
	queue<int> q;
	q.push(0);
	int level = 0;

	// Visited array to mark the already visited nodes
	vector<int> visited(maxVertex + 1, 0);
	visited[0] = 1;

	// BFS traversal
	while (!q.empty()) {
		int sz = q.size();
		while (sz--) {
			auto currentNode = q.front();
			q.pop();
			if (currentNode == X) {
				return level;
			}

			for (auto it : adj[currentNode]) {
				if (!visited[it]) {
					q.push(it);
					visited[it] = 1;
				}
			}
		}
		level++;
	}

	return -1;
}

// Driver Code
int main()
{
	int V = 5;
	vector<vector<int> > edges
		= { { 0, 1 }, { 0, 2 }, { 1, 3 }, { 2, 4 } };
	int X = 3;

	// Function call
	int level = findLevel(V, edges, X);
	cout << level << endl;

	return 0;
}
