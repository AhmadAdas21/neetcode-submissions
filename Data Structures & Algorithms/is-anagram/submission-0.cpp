class Solution {
public:
    bool isAnagram(string s, string t) {
    int n=size(s);
    int k=size(t);
    sort(s.begin(),s.begin()+n);
    sort(t.begin(),t.begin()+k);
    if(s==t)return true;
    else return false;
    }
};
