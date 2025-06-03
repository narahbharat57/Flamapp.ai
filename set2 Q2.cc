#include <bits/stdc++.h>
using namespace std;

bool detectCycle(int node, vector<vector<int>>& adjList, vector<bool>& visited, vector<bool>& inStack) {
    if (!visited[node]) {
        visited[node] = true;
        inStack[node] = true;

        for (int neighbor : adjList[node]) {
            if (!visited[neighbor] && detectCycle(neighbor, adjList, visited, inStack)) {
                return true;
            } else if (inStack[neighbor]) {
                return true;
            }
        }
    }

    inStack[node] = false;
    return false;
}

bool containsCycle(int totalNodes, vector<vector<int>>& dependencyList) {
    vector<vector<int>> adjList(totalNodes);
    for (const auto& relation : dependencyList) {
        int from = relation[0];
        int to = relation[1];
        adjList[from].push_back(to);
    }

    vector<bool> visited(totalNodes, false);
    vector<bool> inStack(totalNodes, false);

    for (int idx = 0; idx < totalNodes; ++idx) {
        if (!visited[idx] && detectCycle(idx, adjList, visited, inStack)) {
            return true;
        }
    }

    return false;
}

int main() {
    int nodes, edgesCount;
    cin >> nodes >> edgesCount;
    vector<vector<int>> dependencyList;

    for (int i = 0; i < edgesCount; ++i) {
        int u, v;
        cin >> u >> v;
        dependencyList.push_back({u, v});
    }

    if (containsCycle(nodes, dependencyList)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
