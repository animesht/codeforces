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
	void bfs(int s);
	void dfs(int s);
};

Graph::Graph(int v) {
	this->v = v;
	adj = new list<int>[v];
}

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
}

void Graph::DFSUtil(int s, bool visited[]) {
	visited[s] = true;
	cout<<s<<" ";

	list<int>::iterator i;

	for (i = adj[s].begin(); i!=adj[s].end(); ++i) {
		if (!visited[*i]) {
			visited[*i] = true;
			DFSUtil(*i, visited);
		}
	}
}

void Graph::dfs(int s) {
	bool visited[v];
	memset(visited, false, v);

	DFSUtil(s, visited);
}

void Graph::bfs(int s) {
	bool visited[v];
	memset(visited, false, v);

	list<int> queue;

	queue.push_back(s);
	visited[s] = true;

	while (!queue.empty()) {
		s = queue.front();
		cout<<s<<" ";
		queue.pop_front();

		list<int>::iterator i;

		for (i = adj[s].begin(); i!=adj[s].end(); ++i) {
			if (!visited[*i])  {
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}

int main() {
	Graph g(5);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);

	g.addEdge(0,2);
	g.addEdge(0,4);
	g.addEdge(4,3);

	g.bfs(0);
	cout<<endl;
	g.dfs(0);
	}