public class maxPairCombinations {
  public int[] solve(int[] A, int[] B) {
    Arrays.sort(A);
    Arrays.sort(B);
    int i = 0, n = A.length;
    PriorityQueue<int[]> pq = new PriorityQueue<>((x, y) -> (A[y[0]] + B[y[1]]) - (A[x[0]] + B[x[1]]));
    pq.add(new int[] { n - 1, n - 1 });
    int[] res = new int[n];
    HashSet<String> set = new HashSet<>();
    while (i < n) {
      int[] top = pq.remove();
      res[i] = A[top[0]] + B[top[1]];
      int[] first = new int[] { top[0] - 1, top[1] };
      int[] second = new int[] { top[0], top[1] - 1 };
      if (top[0] > 0 && !set.contains(Arrays.toString(first))) {
        set.add(Arrays.toString(first));
        pq.add(first);
      }
      if (top[1] > 0 && !set.contains(Arrays.toString(second))) {
        set.add(Arrays.toString(second));
        pq.add(second);
      }

      i++;
    }

    return res;
  }
}
