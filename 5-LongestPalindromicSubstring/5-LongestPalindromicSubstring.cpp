// Last updated: 4/3/2026, 7:39:29 PM
class Solution {
public:
    string expand(string s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }

    string longestPalindrome(string s) {
        string res = "";
        
        for (int i = 0; i < s.size(); i++) {
            string odd = expand(s, i, i);       // odd length
            string even = expand(s, i, i + 1);  // even length
            
            if (odd.size() > res.size()) res = odd;
            if (even.size() > res.size()) res = even;
        }
        
        return res;
    }
};