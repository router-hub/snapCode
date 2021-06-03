public class maxOnesAfterModification {
  public int solve(int[] A, int B) {
    int left = 0, right = 0, zeroes = 0, ans = 0;
    while (right < A.length) {
      if (A[right] == 0)
        zeroes++;
      while (zeroes > B) {
        if (A[left] == 0)
          zeroes--;
        left++;
      }
      ans = Math.max(ans, right - left + 1);
      right++;
    }
    return ans;
  }
}
