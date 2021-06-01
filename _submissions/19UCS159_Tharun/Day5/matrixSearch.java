public class matrixSearch {
  public int searchMatrix(int[][] A, int B) {
    // find biggest indexed row with first element <= target
    int row = getRow(A, B);
    if (row == -1)
      return 0;
    // binary search on that row
    return search(A[row], B);
  }

  private int getRow(int[][] A, int target) {
    int l = 0, r = A.length - 1, ans = -1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (A[mid][0] <= target) {
        ans = mid;
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
    return ans;
  }

  private int search(int[] arr, int target) {
    int l = 0, r = arr.length - 1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (arr[mid] == target)
        return 1;
      if (arr[mid] < target) {
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
    return 0;
  }
}
