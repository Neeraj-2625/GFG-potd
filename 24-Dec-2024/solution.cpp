

class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        
        int s = 0;
        int e = m*n - 1;
        
        while(s<=e){
            int mid = s + (e-s)/2;
            
            int row = mid/m;
            int col = mid%m;
            
            if(mat[row][col] == x)
               return true;
            
            if(mat[row][col] > x)
               e = mid - 1;
            else
               s = mid + 1;
        }
        
        return false;
    }
};