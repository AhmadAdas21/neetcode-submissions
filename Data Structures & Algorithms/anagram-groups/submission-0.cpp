class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mapp;
        for(string t:strs){
            string kk=t;
            sort(kk.begin(),kk.end());
            mapp[kk].push_back(t);
        }
        vector<vector<string>> result;
        for(auto&c :mapp){
            result.push_back(c.second);
        }
        return result;
    }
    
};
