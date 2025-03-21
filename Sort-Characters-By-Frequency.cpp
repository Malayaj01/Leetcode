class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(char c:s){
            mpp[c]++;
        }

        vector<pair<char,int>> v;

        for(auto &it : mpp){
            v.push_back({it.first,it.second});
        }

        sort(v.begin(),v.end(),[] (pair<char,int>&a, pair<char,int>&b){
            return a.second>b.second;
        });

        string res;

        for(int i=0;i<v.size();i++){
            res += string(v[i].second,v[i].first);
        }

        return res;

    }
};