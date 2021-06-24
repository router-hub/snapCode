public class Solution {
  public int colorful(int A) {
    int length = Integer.toString(A).length();
    HashSet<Integer> products = new HashSet<>();
    for (int i = 1; i <= length; i++) {
      for (int j = 0; j <= (length - i); j++) {
        int curr = (A % (int) Math.pow(10, length - j)) / (int) Math.pow(10, length - j - i);
        // System.out.println(i+" "+j+" "+ curr);
        int hash = getHash(curr);
        if (products.contains(hash))
          return 0;
        products.add(hash);
      }
    }
    return 1;
  }

  private int getHash(int n) {
    int hash = 1;
    while (n > 0) {
      hash *= n % 10;
      n /= 10;
    }
    return hash;
  }
}
