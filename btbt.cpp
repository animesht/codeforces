#include <iostream>
#include <list>

using namespace std;

class Graph {
	int v;
	list<int> *adj;
public:
	Graph(int v);
	void addEdge(int v, int w);
	void bfs(int s);
};

Graph::Graph(int v) {
	this->v = v;
	adj = new list<int>[v];
}

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
}

void Graph::bfs(int s) {
	bool visited[v];
	for (int i=0; i<v; i++)
		visited[i] = false;

	list<int> queue;

	queue.push_back(s);
	visited[s] = true;

	while(!queue.empty()) {
		s = queue.front();
		cout<<s<<" ";
		queue.pop_front();

		list<int>::iterator i;

		for (i = adj[s].begin(); i!=adj[s].end(); ++i) {
			if(!visited[*i]) {
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}


int main () {
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);

	g.bfs(0);
}