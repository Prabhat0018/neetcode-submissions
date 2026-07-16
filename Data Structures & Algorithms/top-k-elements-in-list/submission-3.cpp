class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
   unordered_map<int, int> mp;

        // Count frequency
        for (int num : nums) {
            mp[num]++;
        }

        // Store {frequency, element}
        vector<pair<int, int>> arr;
        for (auto &it : mp) {
            arr.push_back({it.second, it.first});
        }

        // Sort in descending order of frequency
        sort(arr.begin(), arr.end(), greater<pair<int, int>>());

        // Take first k elements
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
        
    }
};
