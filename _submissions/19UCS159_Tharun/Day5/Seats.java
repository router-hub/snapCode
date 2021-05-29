public class Seats {
  public int seats(String A) {
    int n = A.length();
    int count = 0;
    for (char c : A.toCharArray()) {
      if (c == 'x')
        count++;
    }
    int curr = 0;
    long cost = 0, toAdd = 0;
    for (int i = 0; i < n; i++) {
      if (A.charAt(i) == 'x') {
        curr++;
        toAdd = (curr > count / 2) ? count - curr : curr;
      } else {
        cost += toAdd;
      }
    }
    return (int) (cost % 10000003);
  }
}