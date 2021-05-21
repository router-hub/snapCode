import java.util.*;

class ThreeSum {
    public int threeSumClosest(int[] A, int B) {
        long diff = Long.MAX_VALUE, res = 0;
        Arrays.sort(A);
        int n = A.length;
        for (int i = 0; i < n; i++) {
            int j = i + 1, k = n - 1;
            while (j < k) {
                long sum = A[i] + A[j] + A[k];
                long currDiff = Math.abs(sum - B);
                if (currDiff < 0)
                    currDiff = -currDiff;
                if (currDiff < diff) {
                    diff = currDiff;
                    res = sum;
                }
                if (sum < B) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return (int) res;
    }
}
