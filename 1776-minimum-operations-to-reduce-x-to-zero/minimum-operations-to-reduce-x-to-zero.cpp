class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        int n = nums.size();

        for(int i : nums) {
            sum += i;
        }

        int c = sum - x;

        if(c < 0) return -1;
        if(c == 0) return n;

        int l = 0;
        int temp = 0;
        int len = 0;

        for(int r = 0; r < n; r++) {
            temp += nums[r];

            while(temp > c) {
                temp -= nums[l];
                l++;
            }

            if(temp == c) {
                len = max(len, r - l + 1);
            }
        }

        if(len == 0) return -1;

        return n - len;
    }
};