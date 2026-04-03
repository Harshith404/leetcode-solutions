// Last updated: 4/3/2026, 7:39:28 PM
class Solution {
public:
    string convert(string s, int numRows) {
        // Edge case
        if (numRows == 1 || numRows >= s.length()) return s;

        vector<string> rows(numRows);
        int currRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currRow] += c;

            // Change direction
            if (currRow == 0 || currRow == numRows - 1)
                goingDown = !goingDown;

            currRow += goingDown ? 1 : -1;
        }

        // Combine all rows
        string result = "";
        for (string row : rows) {
            result += row;
        }

        return result;
    }
};