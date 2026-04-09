class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sol;
        unordered_map<string,vector<string>> mp;

        for(string s : strs)
        {
            string temp = s ;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(s);
        }

        for(auto m : mp)
        {
            sol.push_back(m.second);
        }
        return sol ;
    }
};
