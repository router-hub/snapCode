public class AllocateBooks {
  public int books(int[] A, int B) {
    int n = A.length;
    if (B > n)
      return -1;
    long l = 0, r = 0, ans = -1;
    for (int e : A)
      r += e;
    while (l <= r) {
      long mid = l + (r - l) / 2; // max. value allotted for each student
      if (good(A, B, mid)) {
        ans = mid;
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    return (int) ans;
  }

  public boolean good(int[] books, int students, long x) {
    int i = 0;
    long count = 0, currSum = 0;
    while (i < books.length) {
      if (books[i] > x)
        return false;
      if (currSum + books[i] <= x) {
        currSum += books[i];
      } else {
        count++;
        currSum = books[i];
      }
      i++;
    }
    count++;
    return count <= students;
  }
}
