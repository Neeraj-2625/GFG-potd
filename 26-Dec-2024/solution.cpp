// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(mp.find(target-arr[i])!=mp.end()){
                if(target == 2*arr[i]){
                    if(mp[arr[i]]>1)
                      return true;
                    else
                      return false;
                }else{
                    return true;
                }
            }
        }
        
        return false;
    }
};