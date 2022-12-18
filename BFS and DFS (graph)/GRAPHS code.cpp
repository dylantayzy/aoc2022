using namespace std;
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <list>
#include <unordered_map>

class Graph {
  list<int> *l;
  int V;
public:
  Graph(int v) {
    V=v;
    l= new list<int>[V];
  }
  void addEdge(int i, int j, bool undir = true) {
    l[i].push_back(j);
    if (undir) {
      l[j].push_back(i);
    }
  }
  void printAdjList() {
    for (int i=0; i<V; i++) {
      cout << i << "-->";
      for (auto node:l[i]) {
        cout << node << " ";
      }
      cout << endl;
    }
  }
  void bfs (int source) {
    queue<int> q;
    bool *visited = new bool[V]{0};
    int *dist = new int[V]{0};
    int *parent = new int[V];
    for (int i=0; i<V; i++) {
      parent[i] = -1;
    }
    q.push(source);
    visited[source] = true;
    parent[source] = source;
    dist[source] = 0;
    while (!q.empty()) {
      int f = q.front();
      cout << f << endl;
      q.pop();
      for (auto nbr : l[f]) {
        if (!visited[nbr]) {
          q.push(nbr);
          visited[nbr] = true;
          parent[nbr] = f;
          dist[nbr] = dist[f] + 1;
          visited[nbr] = true;
        }
      }
    }
    for (int i=0; i<V; i++) {
      cout << "Shortest dist to node " << i <<" is "<< dist[i] << endl;
    }
  }
void dfsHelper(int node, bool *visited) {
  visited[node] = true;
  cout << node << " ";
  for (int nbr : l[node]) {
    if (!visited[nbr]) {
      dfsHelper(nbr, visited);
    }
  }
}
  void dfs(int source) {
    bool *visited = new bool[V]{0};
    dfsHelper(source, visited);
  }
};
int main() {
  Graph g(6);
  g.addEdge(0, 1);
  g.addEdge(0, 4);
  g.addEdge(2, 1);
  g.addEdge(3, 4);
  g.addEdge(4, 5);
  g.addEdge(2, 3);
  g.addEdge(3, 5);
  g.dfs(1);
  return 0;
}