#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    int dp[n];
    int ans = 1;

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        ans = max(ans, dp[i]);
    }

    return ans;
}

int main() {
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << "Length of longest increasing subsequence: " << lengthOfLIS(nums) << endl;
    return 0;
}
