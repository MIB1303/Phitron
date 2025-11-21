#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, w;
};

int find(int u, vector<int>& parent) {
    if (parent[u] != u)
        parent[u] = find(parent[u], parent);
    return parent[u];
}

bool unite(int u, int v, vector<int>& parent, vector<int>& rank) {
    int pu = find(u, parent);
    int pv = find(v, parent);
    if (pu == pv) return false;

    if (rank[pu] < rank[pv]) {
        parent[pu] = pv;
    } else if (rank[pu] > rank[pv]) {
        parent[pv] = pu;
    } else {
        parent[pv] = pu;
        rank[pu]++;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int M = (N * (N - 1)) / 2;

        vector<Edge> edges(M);
        int idx = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                int w;
                cin >> w;
                edges[idx++] = {i, j, w};
            }
        }

        sort(edges.begin(), edges.end(), [](const Edge& a, const Edge& b) {
            return a.w > b.w;
        });

        vector<int> parent(N), rank(N, 0);
        iota(parent.begin(), parent.end(), 0);

        int max_mst = 0, count = 0;
        for (const auto& edge : edges) {
            if (unite(edge.u, edge.v, parent, rank)) {
                max_mst += edge.w;
                count++;
                if (count == N - 1)
                    break;
            }
        }

        cout << max_mst << endl;
    }
    return 0;
}
