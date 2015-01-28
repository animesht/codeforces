#include <iostream>
#include <list>

using namespace std;

class Graph {
	int v;
	list<int> *adj;
	void DFSUtil(int s, bool visited[]);
public:
	Graph(int v);
	void addEdge(int v, int w);
	void dfs(int s);
};

Graph::Graph(int v) {
	this->v  = v;
	adj = new list<int>[v];
}

void Graph::DFSUtil(int s, bool visited[]) {
	cout<<s<<" ";
	visited[s] = true;
	list<int>::iterator i;

	for (i = adj[s].begin(); i != adj[s].end(); ++i) {
		if (!visited[*i]) {
			visited[*i] = true;
			DFSUtil(*i, visited);
		}
	}
}

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
}

void Graph::dfs(int s) {
	bool visited[v];
	memset(visited, false, v);

	DFSUtil(s, visited);
}

int main() {
	Graph g(4);
	g.addEdge(0,2);
	g.addEdge(2,1);
	g.addEdge(0,2);
	g.addEdge(2,3);

	g.dfs(0);
}