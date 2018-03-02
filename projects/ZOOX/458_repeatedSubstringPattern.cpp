//458_repeatedSubstringPattern.cpp
class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        int n = str.size();
        for (int i = n / 2; i >= 1; --i) {
            if (n % i == 0) {
                int c = n / i;
                string t = "";
                for (int j = 0; j < c; ++j) {
                    t += str.substr(0, i); 
                }
                if (t == str) return true;
            }
        }
        return false;
    }
};

class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        int i = 1, j = 0, n = str.size();
        vector<int> dp(n + 1, 0);
        while (i < n) {
            if (str[i] == str[j]) dp[++i] = ++j;
            else if (j == 0) ++i;
            else j = dp[j];
        }
        return dp[n] && (dp[n] % (n - dp[n]) == 0);
    }
};