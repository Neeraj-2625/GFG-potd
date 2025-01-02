// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        unordered_map<int, int> prefix;
        int n = arr.size();
        
        int sum = 0, count = 0;

        prefix[0] = 1;

        for (int i=0;i<n;i++) {
            sum += arr[i];
            if (prefix.find(sum - k) != prefix.end()) {
                count += prefix[sum - k];
            }
            prefix[sum]++;
        }

        return count;
        
    }
};