public class maxContinusSeriesOfOnes {
  public int[] maxone(int[] A, int B) {
    // 1101010101
    // l => start of subarray,r =>end of subarray
    int l = 0, r = 0, start = -1, end = -1, zeros = 0;
    while (r < A.length) {
      // include rth element
      if (A[r] == 0)
        zeros++;
      while (l <= r && zeros > B) {
        if (A[l] == 0)
          zeros--;
        l++;
      }
      if (start == -1 || (end - start) < (r - l)) {
        start = l;
        end = r;
      }
      r++;
    }
    int[] res = new int[end - start + 1];
    for (int i = 0; i < end - start + 1; i++) {
      res[i] = i + start;
    }
    return res;
  }
}
