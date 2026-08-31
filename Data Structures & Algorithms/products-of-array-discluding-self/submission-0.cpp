class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();

        int prod = 1;
        int zeroCount = 0;

        // Calculate product of non-zero elements
        for (int x : nums) {
            if (x == 0) {
                zeroCount++;
            } else {
                prod *= x;
            }
        }

        vector<int> ans(n);

        // More than one zero
        if (zeroCount > 1) {
            return ans;   // all 0
        }

        // Exactly one zero
        if (zeroCount == 1) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) {
                    ans[i] = prod;
                } else {
                    ans[i] = 0;
                }
            }

            return ans;
        }

        // No zeros
        for (int i = 0; i < n; i++) {
            ans[i] = prod / nums[i];
        }

        return ans;
    
    
    }
};
