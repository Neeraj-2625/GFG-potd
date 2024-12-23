

class Solution {
  private:
    bool solve(int row,int m,vector<vector<int>> mat,int x){
        int s=0;
        int e=m-1;
        
        while(s<=e){
            int mid = s + (e-s)/2;
            
            if(mat[row][mid] == x)
              return true;
            
            if(mat[row][mid] > x)
               e = mid-1;
            else
               s = mid+1;
        }
        
        return false;
    }
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i=0;i<n;i++){
            bool ans = solve(i,m,mat,x);
            
            if(ans)
              return true;
        }
        
        return false;
    }
};