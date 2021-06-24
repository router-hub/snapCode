import java.util.*;

public class sortedInsertPosition {
  public int searchInsert(ArrayList<Integer> a, int b) {
    int l = 0, r = a.size() - 1, res = a.size();
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (a.get(mid) >= b) {
        res = mid;
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    return res;
  }
}
