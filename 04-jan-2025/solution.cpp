class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        int n = arr.size();
        int ans = 0;
        
        for(int i=0;i<n-2;i++){
            int j = i+1;
            int k = n-1;
            
            while(j<k){
                int sum = arr[i]+arr[j]+arr[k];
                
                if(sum<target){
                    j++;
                }else if(sum>target){
                    k--;
                }else{
                    int c1 = 0; 
                    int c2 = 0;
                    int el = arr[j];
                    int e2 = arr[k];
                    while(j<=k && arr[j]==el){
                        c1++;
                        j++;
                    }
                    
                    while(j<=k && arr[k]==e2){
                        c2++;
                        k--;
                    }
                    
                    if(el == e2){
                        ans += (c1*(c1-1))/2;
                    }else{
                        ans += c1*c2;
                    }
                }
            }
        }
        return ans;
    }
};