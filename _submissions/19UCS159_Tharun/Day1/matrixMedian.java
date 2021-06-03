public class matrixMedian {
  public int findMedian(int[][] A) {
    int n = A.length, m = A[0].length;
    int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
    for (int row = 0; row < n; row++) {
      min = Math.min(min, A[row][0]);
      max = Math.max(max, A[row][m - 1]);
    }
    // binary search for the answer
    int l = min, r = max;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      int required = (n * m + 1) / 2;
      int found = 0, searchMax = 0, searchMaxFreq = 0;
      for (int row = 0; row < n; row++) {
        int search = binarySearch(A[row], mid); // returns i such that a[0..i]<=mid
        if (search != -1) {
          found += search + 1;
          if (A[row][search] > searchMax) {
            searchMax = A[row][search];
          }
        }
      }
      for (int row = 0; row < n; row++) {
        int first = firstOccurance(A[row], searchMax);
        if (first != -1) {
          searchMaxFreq += (binarySearch(A[row], searchMax) - first + 1);
        }
      }
      if (found == required) {
        return searchMax;
      }
      if (found > required && found - searchMaxFreq < required) {
        return searchMax;
      }
      if (found > required) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    return -1;
  }

  private int binarySearch(int[] arr, int x) {
    int l = 0, r = arr.length - 1, ans = -1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (arr[mid] > x) {
        r = mid - 1;
      } else {
        ans = mid;
        l = mid + 1;
      }
    }
    return ans;
  }

  private int firstOccurance(int[] arr, int x) {
    int l = 0, r = arr.length - 1, ans = -1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (arr[mid] == x) {
        ans = mid;
        r = mid - 1;
        continue;
      }
      if (arr[mid] > x) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    return ans;
  }

}
