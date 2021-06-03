public class searchForRange {
  public int[] searchRange(final int[] A, int B) {
    int left = -1, right = -1;
    int l = 0, r = A.length - 1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (A[mid] == B) {
        left = mid;
        r = mid - 1;
      } else if (A[mid] > B) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }

    l = 0;
    r = A.length - 1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (A[mid] == B) {
        right = mid;
        l = mid + 1;
      } else if (A[mid] > B) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }

    return new int[] { left, right };
  }
}
