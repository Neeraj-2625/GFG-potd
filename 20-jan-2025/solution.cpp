

 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2) 
{  
    if(head1==NULL)
    return head2;
    
    if(head2==NULL)
    return head1;
    
    Node* temp1=head1;
    Node* temp2=head2;
    Node* head=new Node(-1);
    Node* trav=head;
    
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data>temp2->data){
            Node* newn=new Node(temp2->data);
            trav->next=newn;
            trav=newn;
            temp2=temp2->next;
        }else{
            Node* newn=new Node(temp1->data);
            trav->next=newn;
            trav=newn;
            temp1=temp1->next;
        }
    }
    while(temp1!=NULL){
        Node* newn=new Node(temp1->data);
        trav->next=newn;
        trav=newn;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        Node* newn=new Node(temp2->data);
        trav->next=newn;
        trav=newn;
        temp2=temp2->next;
    }
    return head->next;
}  