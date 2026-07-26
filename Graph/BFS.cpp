#include <iostream>
#include <list>
#include <queue>
#include <vector>
using namespace std;

class Graph {
    int V;
    list<int> *l;

  public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    // Destructor to prevent memory leak
    ~Graph() {
        delete[] l;
    }

    void add_Edge(int u, int v) {
        // Add input validation
        if (u >= 0 && u < V && v >= 0 && v < V) {
            l[u].push_back(v);
            l[v].push_back(u);
        }
    }

    void print() {
        for (int u = 0; u < V; u++) {
            list<int> neighbours = l[u];
            cout << u << " : ";
            for (int v : neighbours) {
                cout << v << "->";
            }
            cout << "nullptr" << endl;
        }
    }

    void BFS(int start = 0) {
        // Input validation
        if (start < 0 || start >= V) {
            cout << "Invalid starting vertex!" << endl;
            return;
        }

        queue<int> q;
        vector<bool> visited(V, false);
        q.push(start);
        visited[start] = true;

        cout << "BFS traversal starting from vertex " << start << ": ";
        while (!q.empty()) {
            int u = q.front(); // current vertex
            q.pop();
            cout << u << " ";

            list<int> neighbours = l[u];
            for (int v : neighbours) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }

    // BFS to handle disconnected graphs
    void BFS_Complete() {
        vector<bool> visited(V, false);
        cout << "Complete BFS traversal (handles disconnected components): ";

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                BFS_Helper(i, visited);
            }
        }
        cout << endl;
    }

  private:
    void BFS_Helper(int start, vector<bool> &visited) {
        queue<int> q;
        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            cout << u << " ";

            list<int> neighbours = l[u];
            for (int v : neighbours) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }
};

int main() {
    Graph graph(7);
    graph.add_Edge(0, 1);
    graph.add_Edge(0, 2);
    graph.add_Edge(1, 3);
    graph.add_Edge(2, 4);
    graph.add_Edge(3, 5);
    graph.add_Edge(4, 5);
    graph.add_Edge(5, 6);

    // Test different starting points
    graph.BFS(0); // Start from vertex 0
    graph.BFS(3); // Start from vertex 3

    // Test complete BFS for disconnected graphs
    graph.BFS_Complete();

    cout << "\nGraph structure:" << endl;
    graph.print();

    return 0;
}