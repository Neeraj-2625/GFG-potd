// User function template for C++
class Solution {
  private:
    bool isPoss(vector<vector<int>> mat,int row,int k,int m){
        int s = 0;
        int e = m-1;
        
        while(s<=e){
            int mid = s + (e-s)/2;
            
            if(mat[row][mid] == k)
              return true;
            
            if(mat[row][mid]>k)
               e = mid-1;
            else 
               s = mid+1;
        }
        
        return false;
    }
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i=0;i<n;i++){
            if(isPoss(mat,i,x,m))
                return true;
        }
        
        return false;
    }
};