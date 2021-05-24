import java.util.*;

public class meetingRooms {
  public int solve(int[][] A) {
    ArrayList<int[]> list = new ArrayList<>();
    for (int[] a : A) {
      list.add(new int[] { a[0], 1 });
      list.add(new int[] { a[1], -1 });
    }
    Collections.sort(list, (x, y) -> ((x[0] != y[0]) ? x[0] - y[0] : x[1] - y[1]));
    int curr = 0, ans = 0;
    for (int[] val : list) {
      curr += val[1];
      ans = Math.max(ans, curr);
    }
    return ans;
  }
}
