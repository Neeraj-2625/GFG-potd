class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        vector<int> ans;
        int n = mat.size();
        int m = mat[0].size();
        
        int rows = 0,cols = 0, rowe = n-1, cole = m-1;
        int count = 0;
        
        while(count<m*n){
            
            for(int i=cols;i<=cole;i++){
                ans.push_back(mat[rows][i]);
                count++;
            }
            
            rows++;
            if(count == m*n)
               break;
            
            for(int i=rows;i<=rowe;i++){
                ans.push_back(mat[i][cole]);
                count++;
            }
            
            cole--;
            if(count == m*n)
               break;
               
            for(int i=cole;i>=cols;i--){
                ans.push_back(mat[rowe][i]);
                count++;
            }
            
            rowe--;
            if(count == m*n)
               break;
            
            for(int i=rowe;i>=rows;i--){
                ans.push_back(mat[i][cols]);
                count++;
            }   
            
            cols++;
            if(count == m*n)
               break;
        }
        
        return ans;
        
    }
};