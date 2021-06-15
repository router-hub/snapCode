public class Solution {
    public ArrayList<Integer> maxone(ArrayList<Integer> A, int B) {
        int index = 0, count = 0;
        int left = 0, right = 0;
        int flips = B;

        while (right < A.size()) {
            if (A.get(right) == 1) {
                right++;
            } else if (flips > 0) { // A.get(right) == 0
                right++;
                flips--;
            } else if (left < right) { // A.get(right) == 0 && flips == 0
                flips += 1 - A.get(left);
                left++;
            } else { // A.get(right) == 0 && flips == 0 && left == right
                left++; right++;
            }

            if (right - left > count) {
                index = left;
                count = right - left;
            }
        }
        
        ArrayList<Integer> result = new ArrayList<Integer>();
        for (int i = 0; i < count; i++)
            result.add(index + i);
        return result;
    }
}
