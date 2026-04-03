// Last updated: 4/3/2026, 7:39:04 PM
int mySqrt(int x) {
    if (x < 2) return x;

    int left = 1, right = x, ans;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid <= x / mid) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return ans;
}