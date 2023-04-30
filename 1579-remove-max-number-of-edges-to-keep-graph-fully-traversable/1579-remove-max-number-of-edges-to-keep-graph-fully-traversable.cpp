static const auto __optimize__ = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();
class UnionFind{
    vector<int> id;
    int size;
public:
    UnionFind(int N ): id(N), size(N) {
        iota(begin(id), end(id), 0);
    }
    int find(int a) {
        return id[a] == a ? a : (id[a] = find(id[a]));
    }
    int connected(int a, int b) {
        return find(a) == find(b);
    }
    void connect(int a, int b) {
        int p = find(a), q = find(b);
        if (p == q) return;
        id[p] = q;
        --size;
    }
    int getSize() { return size; }
};
class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& E) {
        UnionFind a(n), b(n);
        int ans = 0;
        for (auto &e : E) {
            if (e[0] != 3) continue;
            int u = e[1] - 1, v = e[2] - 1;
            if (a.connected(u, v)) {
                ++ans;
                continue;
            }
            a.connect(u, v);
            b.connect(u, v);
        }
        for (auto &e : E) {
            if (e[0] != 1) continue;
            int u = e[1] - 1, v = e[2] - 1;
            if (a.connected(u, v)) ++ans;
            else a.connect(u, v);
        }
        if (a.getSize() != 1) return -1;
        for (auto &e : E) {
            if (e[0] != 2) continue;
            int u = e[1] - 1, v = e[2] - 1;
            if (b.connected(u, v)) ++ans;
            else b.connect(u, v);
        }
        return b.getSize() != 1 ? -1 : ans;
    }
};


// pehle groups ko 3 me banalo 
// agar mai jinko connect karne jarha hu woh already connected hai toh sahi nhi hai unko connect karna 

// jo group 3 se related nhi hoga na usko alice - bob ki edge honi cahiye alag alag ya 
// alice-bob ki single edge honi cahiye 
