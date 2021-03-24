struct node *reverse (struct node *head, int k)
    { 
        if(head==NULL) return head;
        
        node* prev=NULL;
        node* current=head;
        node* next=NULL;
        
        int count=0;
        while(current!=NULL and count<k)  /*reverse first k nodes of the linked list */
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            count++;
        }
        if(next!=NULL) //next is now a pointer to (k+1)th node
        {
            head->next=reverse(next,k);
        }
        return prev;
    }