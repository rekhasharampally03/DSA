class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        // k == 1
        if (k == 1) {
            unordered_map<int, int> freq;

            for (int x : nums)
                freq[x]++;

            int ans = INT_MIN;

            for (auto p : freq) {
                if (p.second == 1)
                    ans = max(ans, p.first);
            }

            return ans == INT_MIN ? -1 : ans;
        }

        // k == n
        if (k == n) {
            return *max_element(nums.begin(),nums.end());
        }

        // 1 < k < n
        int ans = INT_MIN;

        int firstCount = 0;
        int lastCount = 0;

        for (int x : nums) {
            if (x == nums[0])
                firstCount++;

            if (x == nums[n - 1])
                lastCount++;
        }

        if (firstCount == 1)
            ans = max(ans, nums[0]);

        if (lastCount == 1)
            ans = max(ans, nums[n - 1]);

        return ans == INT_MIN ? -1 : ans;
    }
};