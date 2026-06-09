class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashSet<Integer> hs = new HashSet<>();
        for (int i : nums) {
            hs.add(i);
        }
        if (hs.size() != nums.length) {
            return true;
        }
        return false;
    }
}
