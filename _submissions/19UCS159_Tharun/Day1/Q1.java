
/*
Problem link:
https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

*/
public class Q1 {
  // T=O(n),S=O(1)
  public int coverPoints(int[] A, int[] B) {
    int n = A.length, steps = 0;
    int currX = A[0], currY = B[0];
    for (int i = 1; i < n; i++) {
      int curr = 0;
      int dist1 = Math.abs(currX - A[i]), dist2 = Math.abs(currY - B[i]);
      if (dist1 < dist2) {
        curr = dist1 + (dist2 - dist1);
      } else {
        curr = dist2 + (dist1 - dist2);
      }
      steps += curr;
      currX = A[i];
      currY = B[i];
    }
    return steps;
  }
}
