class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]+arr[i-1];
        }
        
        for(int i=n-2;i>=0;i--){
            suffix[i] = suffix[i+1]+arr[i+1];
        }
        
        
        for(int i=0;i<n;i++){
            if(prefix[i]==suffix[i])
               return i;
        }
        
        return -1;
        
    }
};