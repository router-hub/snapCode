/*
Valid BST from Preorder : https://www.interviewbit.com/problems/valid-bst-from-preorder/

*/

import java.util.*;

public class Q12 {
  // T=O(n)
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
