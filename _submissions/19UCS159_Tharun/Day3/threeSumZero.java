import java.util.*;

public class threeSumZero {
  public ArrayList<ArrayList<Integer>> threeSum(ArrayList<Integer> a) {
    Set<ArrayList<Integer>> res = new LinkedHashSet<>();
    int l = a.size();
    Collections.sort(a);
    for (int i = 0; i < l - 2; i++) {
      int j = i + 1, k = l - 1;
      while (j < k) {
        long s = (long) a.get(i) + (long) a.get(j) + (long) a.get(k);
        if (s == 0) {
          ArrayList<Integer> al = new ArrayList<>();
          al.add(a.get(i));
          al.add(a.get(j));
          al.add(a.get(k));
          res.add(al);
          j++;
          k--;
        } else if (s < 0)
          j++;
        else
          k--;
      }
    }
    return new ArrayList<ArrayList<Integer>>(res);
  }
}
