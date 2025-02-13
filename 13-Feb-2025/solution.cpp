/*
Node is as follows
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
    private:
      bool solve(Node* root,int target,unordered_map<int,int> &mp){
          if(root==NULL)
            return false;
          
          if(mp.find(target-root->data)!=mp.end())
            return true;
          
          mp[root->data] = 1;  
          
          bool left = solve(root->left,target,mp);
          bool right = solve(root->right,target,mp);
          
          return left | right;
      }
    public:
      bool findTarget(Node *root, int target) {
          unordered_map<int,int> mp;
          
          return solve(root,target,mp);
          
      }
  };
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  