public class Solution {
  public int[][] subsets(int[] A) {
    Arrays.sort(A);
    ArrayList<int[]> res = new ArrayList<>();
    int n = A.length;
    solve(A, 0, new ArrayList<>(), res);
    int[][] ans = new int[res.size()][];
    for (int i = 0; i < res.size(); i++) {
      ans[i] = res.get(i);
    }
    return ans;
  }

  private void solve(int[] A, int i, ArrayList<Integer> curr, ArrayList<int[]> res) {
    int[] cur = new int[curr.size()];
    for (int k = 0; k < curr.size(); k++) {
      cur[k] = curr.get(k);
    }
    res.add(cur);
    if (i == A.length) {
      return;
    }
    for (int j = i; j < A.length; j++) {
      ArrayList<Integer> newCurr = new ArrayList<>(curr);
      newCurr.add(A[j]);
      solve(A, j + 1, newCurr, res);
    }

  }
}
