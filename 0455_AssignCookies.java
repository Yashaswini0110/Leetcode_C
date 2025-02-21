class Solution {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);
        int i = 0, j = 0, c = 0;

        // Use two-pointer technique
        while (i < g.length && j < s.length) {
            if (g[i] <= s[j]) {
                c++; 
                i++; 
            }
            j++; 
        }

        return c;
    }
}
