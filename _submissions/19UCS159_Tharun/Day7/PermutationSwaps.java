public class PermutationSwaps {
  public int solve(int[] A, int[] B, int[][] C) {
    // build dsu using C
    DSU d = new DSU(A.length);
    for (int[] edge : C) {
      d.union(edge[0] - 1, edge[1] - 1);
    }
    // for every index check if its possible to put e in correct position
    int[] index = new int[A.length + 1];
    for (int i = 0; i < A.length; i++) {
      index[A[i]] = i;
    }
    for (int i = 0; i < A.length; i++) {
      if (d.find(index[A[i]]) != d.find(index[B[i]]))
        return 0;
    }
    return 1;
  }

  class DSU {
    int size;
    int[] par, rank;

    DSU(int size) {
      this.size = size;
      par = new int[size];
      rank = new int[size];
      for (int i = 0; i < size; i++) {
        par[i] = i;
        rank[i] = 1;
      }
    }

    public int find(int x) {
      if (par[x] == x)
        return x;
      return par[x] = find(par[x]);
    }

    public void union(int x, int y) {
      x = find(x);
      y = find(y);
      if (rank[x] < rank[y]) {
        int temp = x;
        x = y;
        y = temp;
      }
      par[y] = x;
      if (rank[x] == rank[y])
        rank[x]++;
    }
  }
}
