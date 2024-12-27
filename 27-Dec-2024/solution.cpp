class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int,int> mp;
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            if(mp.find(target-arr[i])!=mp.end()){
                if(target-arr[i] == arr[i]){
                    ans += mp[arr[i]]-1;
                }else{
                    ans += mp[target-arr[i]];
                }
                
                mp[arr[i]]--;
            }
        }
        return ans;
    }
};