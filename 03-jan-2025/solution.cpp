class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n = arr.size();
        
        unordered_map<long,long> prefix;
        
        
        long sum = 0;
        
        long ans = 0;
        
        for(int i=0;i<n;i++){
            
            sum = sum^arr[i];
            
            if(prefix.find(sum^k)!=prefix.end()){
                ans += prefix[sum^k];
            }
            
            if(sum == k)
              ans++;
            
            prefix[sum]++;
        }
        return ans;
    }
};