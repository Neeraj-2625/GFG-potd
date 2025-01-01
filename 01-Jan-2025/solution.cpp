// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        int n = arr.size();
        vector<string> temp = arr;
        
        for(int i=0;i<n;i++){
            sort(arr[i].begin(),arr[i].end());
        }
        
        unordered_map<string,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]] = 1;
        }
        
        unordered_map<string,vector<string>> t;
        
        for(int i=0;i<n;i++){
            t[arr[i]].push_back(temp[i]);
        }
        
        vector<vector<string>> ans;
        
        
        for(auto i:t){
            vector<string> v;
            for(auto j:i.second){
                v.push_back(j);
            }
            ans.push_back(v);
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};