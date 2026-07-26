#include <iostream>
#include <list>
#include <vector>

class Graph {
  private:
    int vertices;
    std::vector<std::list<int>> adjList;

  public:
    Graph(int v) : vertices(v), adjList(v) {}

    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
        // For undirected graph, uncomment the line below
        // adjList[dest].push_back(src);
    }

    void printGraph() {
        for (int i = 0; i < vertices; i++) {
            std::cout << "Vertex " << i << ": ";
            for (int neighbor : adjList[i]) {
                std::cout << neighbor << " ";
            }
            std::cout << std::endl;
        }
    }

    void DFS(int vertex, std::vector<bool> &visited) {
        visited[vertex] = true;
        std::cout << vertex << " ";

        for (int neighbor : adjList[vertex]) {
            if (!visited[neighbor]) {
                DFS(neighbor, visited);
            }
        }
    }

    void DFSTraversal(int start = 0) {
        std::vector<bool> visited(vertices, false);
        std::cout << "DFS: ";
        DFS(start, visited);
        std::cout << std::endl;
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);

    g.printGraph();
    g.DFSTraversal();

    return 0;
}