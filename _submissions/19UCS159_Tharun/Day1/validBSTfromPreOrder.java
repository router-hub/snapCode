public class validBSTfromPreOrder {
  public int solve(int[] A) {
    Stack<Integer> stack = new Stack<>();
    int n = A.length;
    int currRoot = Integer.MIN_VALUE;
    for (int i = 0; i < n; i++) {
      // right subtree has element greater than the root
      if (currRoot > A[i])
        return 0;
      // when A[i] > top => A[i] is right child of top
      while (!stack.isEmpty() && stack.peek() < A[i]) {
        currRoot = stack.peek();
        stack.pop();
      }
      stack.push(A[i]);
    }
    return 1;
  }

}
