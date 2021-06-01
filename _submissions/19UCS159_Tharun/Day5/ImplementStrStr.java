import java.util.*;

public class ImplementStrStr {
    // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
    public int strStr(final String A, final String B) {
        int n = A.length(), m = B.length();
        if (n == 0 || m == 0 || n < m)
            return -1;
        int[] lps = new int[m];
        Arrays.fill(lps, -1);
        int i = 0, j = 1;
        while (j < m) {
            if (B.charAt(i) == B.charAt(j)) {
                lps[j] = i;
                i++;
                j++;
            } else {
                if (i > 0)
                    i = lps[i - 1] + 1;
                else
                    j++;
            }
        }

        i = 0;
        j = 0;
        while (i < n && j < m) {
            if (A.charAt(i) == B.charAt(j)) {
                if (j == m - 1)
                    return i - m + 1;
                i++;
                j++;
            } else {
                if (j > 0)
                    j = lps[j - 1] + 1;
                else
                    i++;
            }
        }
        return -1;
    }
}
