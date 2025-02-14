/*
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
    private:
      void solve(Node* root,vector<int> &ans){
          if(root == NULL)
            return;
          
          solve(root->left,ans);
          ans.push_back(root->data);
          solve(root->right,ans);
      }
      void final(Node* root,vector<int> &ans,int &index){
          if(root == NULL)
            return;
          
          final(root->left,ans,index);
          root->data = ans[index];
          index++;
          final(root->right,ans,index);
          
      }
    public:
      void correctBST(Node* root) {
          vector<int> ans;
          solve(root,ans);
          
          sort(ans.begin(),ans.end());
          int index = 0;
          
          final(root,ans,index);
      }
  };
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  