class Solution {
public:
    int lcs(string& text1, string& text2, int n, int m,
            vector<vector<int>>& t) {
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < m + 1; j++) {
                if (i == 0 || j == 0) {
                    t[i][j] = 0;
                }
            }
        }
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < m + 1; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    t[i][j] = 1 + t[i - 1][j - 1];
                } else {
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
                }
            }
        }
        return t[n][m];
    }
    int longestPalindromeSubseq(string s) {
        string s1= s;
        reverse(s1.begin(), s1.end());
        int n = s.size();
        int m = s1.size();
        vector<vector<int>> t(n + 1, vector<int>(m + 1, -1));
        return lcs(s, s1, n, m, t);
    }
};