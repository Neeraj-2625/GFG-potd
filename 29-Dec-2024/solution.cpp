class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        
        unordered_map<int,int> first,second;
        
        int n = a.size();
        int m = b.size();
        
        for(int i=0;i<n;i++){
            first[a[i]] = 1;
        }
        
        for(int i=0;i<m;i++){
            second[b[i]] = 1;
        }
        
        for(auto i:first){
            if(second.find(i.first)!=second.end()){
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};