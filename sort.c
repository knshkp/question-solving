Node* insertAtTail(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
    
}
Node* sortList(Node *head)
{
    Node* temp=head;
    Node* l1=new Node(-1);
    Node* l1t=l1;
    Node* l2=new Node(-1);
    Node* l2t=l2;
    Node* l0=new Node(-1);
    Node* l0t=l0;
    while(temp!=NULL){
        if(temp->data==0){
            insertAtTail(l0t,temp);
        }
        else if(temp->data==1){
            insertAtTail(l1t,temp);
        }
        else{
            insertAtTail(l2t,temp);
        }
        temp=temp->next;
    }
    if(l1->next!=NULL){
        l0t->next=l1->next;
    }
    else{
        l0t->next=l2->next;
    }
    l1t->next=l2->next;
    l2t->next=NULL;
    delete(l0);
    delete(l1);
    delete(l2);
    head=l0->next;
    return head;

}
