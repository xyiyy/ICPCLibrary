struct UnionFind {
  int parent[10000];
  void unionSet(int x, int y) {
    x = root(x); y = root(y);
    if (x == y) { return; }
    if (parent[y] < parent[x]) { swap(x, y); }
    parent[x] += parent[y];
    parent[y] = x;
  }
  bool findSet(int x, int y) {
    return root(x) == root(y);
  }
  int root(int x) { return parent[x] < 0 ? x : parent[x] = root(parent[x]); }
};
