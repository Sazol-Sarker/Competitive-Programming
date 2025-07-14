#include <bits/stdc++.h>
#define ll long long
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& component) {
    visited[node] = true;
    component.push_back(node);
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, component);
        }
    }
}

int main() {
    ll n, m1, m2;
    cin >> n >> m1 >> m2;

    vector<vector<int>> adjF(n), adjG(n);
    vector<bool> visitedF(n, false), visitedG(n, false);

    // Input graph F
    for (ll i = 0; i < m1; i++) {
        ll u, v;
        cin >> u >> v;
        adjF[u - 1].push_back(v - 1);
        adjF[v - 1].push_back(u - 1);
    }

    // Input graph G
    for (ll i = 0; i < m2; i++) {
        ll u, v;
        cin >> u >> v;
        adjG[u - 1].push_back(v - 1);
        adjG[v - 1].push_back(u - 1);
    }

    vector<vector<int>> componentsF, componentsG;

    // Find components in F
    for (int i = 0; i < n; i++) {
        if (!visitedF[i]) {
            vector<int> component;
            dfs(i, adjF, visitedF, component);
            componentsF.push_back(component);
        }
    }

    // Find components in G
    for (int i = 0; i < n; i++) {
        if (!visitedG[i]) {
            vector<int> component;
            dfs(i, adjG, visitedG, component);
            componentsG.push_back(component);
        }
    }

    // Calculate the minimum number of operations
    int ans = 0;
    unordered_map<int, set<int>> componentMappingF, componentMappingG;

    for (int i = 0; i < componentsF.size(); i++) {
        for (int node : componentsF[i]) {
            componentMappingF[i].insert(node);
        }
    }

    for (int i = 0; i < componentsG.size(); i++) {
        for (int node : componentsG[i]) {
            componentMappingG[i].insert(node);
        }
    }

    // Now we can calculate the operations needed by comparing components of F and G
    for (auto& entryF : componentMappingF) {
        bool isMatch = false;
        for (auto& entryG : componentMappingG) {
            if (entryF.second == entryG.second) {
                isMatch = true;
                break;
            }
        }
        if (!isMatch) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
