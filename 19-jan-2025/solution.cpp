/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        int n = 0;
        Node* trav = head;
        
        while(trav!=NULL){
            n++;
            trav = trav->next;
        }
        
        k = k%n;
        
        if(k==0)
         return head;
         
        trav = head;
        Node* end = NULL;
        
        while(trav!=NULL){
            end = trav;
            trav = trav->next;
        }
        
        trav = head;
        Node* curr = NULL;
        
        while(k!=0){
            curr = trav;
            trav = trav->next;
            k--;
        }
        
        end->next = head;
        curr->next = NULL;
        
        return trav;
    }
};