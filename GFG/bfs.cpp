// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> bfsTraversal;
        vector<bool> visited(V, false); // To keep track of visited nodes

        // Queue for BFS
        queue<int> q;
        
        // Starting from the first vertex (0 in 0-based indexing)
        q.push(0);
        visited[0] = true;

        // BFS
        while (!q.empty()) {
            int currentVertex = q.front();
            q.pop();
            bfsTraversal.push_back(currentVertex);

            // Exploring adjacent vertices
            for (int i = 0; i < adj[currentVertex].size(); i++) {
                int adjacentVertex = adj[currentVertex][i];
                if (!visited[adjacentVertex]) {
                    q.push(adjacentVertex);
                    visited[adjacentVertex] = true;
                }
            }
        }

        return bfsTraversal;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // adj[v].push_back(u);
        }
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
