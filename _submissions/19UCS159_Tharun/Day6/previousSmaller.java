public class previousSmaller {
  public int[] prevSmaller(int[] A) {
    Stack<Integer> stack = new Stack<>();
    int n = A.length;
    int[] res = new int[n];
    for (int i = 0; i < n; i++) {
      while (!stack.isEmpty() && A[stack.peek()] >= A[i]) {
        stack.pop();
      }
      res[i] = stack.isEmpty() ? -1 : A[stack.peek()];
      stack.push(i);
    }
    return res;
  }
}
