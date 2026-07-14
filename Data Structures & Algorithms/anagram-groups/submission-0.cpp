class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<vector<string>>ans;
         int n = s.size();
         unordered_map<string, vector<string>> mp;
         for (string& str : s) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());

        mp[sortedStr].push_back(str);
    }
         for(auto &it: mp){
            ans.push_back(it.second);
         }
         return ans;
    }
};
