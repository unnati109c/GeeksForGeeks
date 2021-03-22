Node* deleteMid(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    
    if(head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node* prev;
    while(fast!=NULL and fast->next!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    	
    	prev->next=slow->next;
    	delete slow;
    
    return head;
    
}