class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mapp;
        for(int n:nums){
            mapp[n]++;

        }
        vector<pair<int,int>> v;
        for (auto& p :mapp) {
            v.push_back({p.second, p.first});
        }
        sort(v.rbegin(),v.rend());
        vector<int>result;
        for (int i=0;i<k;i++) {
            result.push_back(v[i].second);
        }
    return result;
    }
};
