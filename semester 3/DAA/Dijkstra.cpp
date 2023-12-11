#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <chrono>

using namespace std;
using namespace chrono;

typedef pair<int, int> pii;
typedef vector<vector<pii>> Graph;

vector<int> Dijkstra(const Graph& graph, int source) {
    int n = graph.size();
    vector<int> dist(n, numeric_limits<int>::max());
    dist[source] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push(make_pair(0, source));

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (const auto& edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    return dist;
}

int main() {
    cout << "enter the number of nodes and edges";
    int n, m;
    cin >> n >> m;

    Graph graph(n);

    for (int i = 0; i < m; i++) {
        int u, v, weight;
        cout << "enter edge details(source,dest,weight)";
        cin >> u >> v >> weight;
        graph[u].push_back(make_pair(v, weight));
        graph[v].push_back(make_pair(u, weight));
    }

    int source;
    cout << "enter the source node index";
    cin >> source;

    auto start_time = high_resolution_clock::now();

    vector<int> dist = Dijkstra(graph, source);

    auto stop_time = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop_time - start_time);

    cout << "Shortest distances from node " << source << ":\n";
    for (int i = 0; i < n; i++) {
        cout << "Node " << i << ": " << dist[i] << "\n";
    }

    cout << "Time taken by Dijkstra's algorithm: " << duration.count() << " microseconds\n";

    return 0;
}
// enter the number of nodes and edges
// 5 7
// enter edge details(source, dest, weight)
// 0 1 2
// 0 2 4
// 1 2 1
// 1 3 7
// 2 4 3
// 3 4 1
// 0 4 5
// enter the source node index
// 0
