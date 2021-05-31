import java.util.*;

public class FourSum {
  public ArrayList<ArrayList<Integer>> fourSum(ArrayList<Integer> A, int B) {
    Collections.sort(A);
    LinkedHashSet<ArrayList<Integer>> res = new LinkedHashSet<>();
    for (int i = 0; i < A.size() - 3; i++) {
      LinkedHashSet<ArrayList<Integer>> curr = threeSum(A, i + 1, B - A.get(i));
      for (ArrayList<Integer> tuple : curr) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(A.get(i));
        list.addAll(tuple);
        res.add(list);
      }
    }
    return new ArrayList<>(res);
  }

  public LinkedHashSet<ArrayList<Integer>> threeSum(ArrayList<Integer> A, int start, int B) {
    LinkedHashSet<ArrayList<Integer>> res = new LinkedHashSet<>();
    for (int i = start; i < A.size() - 2; i++) {
      LinkedHashSet<ArrayList<Integer>> curr = twoSum(A, i + 1, B - A.get(i));
      for (ArrayList<Integer> pair : curr) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(A.get(i));
        list.addAll(pair);
        res.add(list);
      }
    }
    return res;
  }

  public LinkedHashSet<ArrayList<Integer>> twoSum(ArrayList<Integer> A, int start, int B) {
    LinkedHashSet<ArrayList<Integer>> res = new LinkedHashSet<>();
    int i = start, j = A.size() - 1;
    while (i < j) {
      int sum = A.get(i) + A.get(j);
      if (sum == B) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(A.get(i));
        list.add(A.get(j));
        res.add(list);
        i++;
        j--;
      } else if (sum < B) {
        i++;
      } else {
        j--;
      }
    }
    return res;
  }

}
