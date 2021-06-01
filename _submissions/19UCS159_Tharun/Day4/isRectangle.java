public class isRectangle {
  public int solve(int A, int B, int C, int D) {
    if (A == B && C == D)
      return 1;
    if (A == C && B == D)
      return 1;
    if (A == D && B == C)
      return 1;
    return 0;
  }
}
