// Last updated: 4/3/2026, 7:38:45 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
      int left=0;
      int right =s.size()-1;
      while(left<right)
      {
        swap(s[left],s[right]);
        left++;
        right--;
      }
    }
};