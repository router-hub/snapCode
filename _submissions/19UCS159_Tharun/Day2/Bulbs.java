public class Bulbs {
  public int bulbs(int[] A) {
    int count = 0;
    for (int i = 0; i < A.length; i++) {
      if ((count & 1) != 0)
        A[i] = A[i] ^ 1;
      if (A[i] == 0) {
        count++;
        A[i] = 1;
      }
    }
    return count;
  }
}
