bool detectLoop(Node* head)
    {
        if(head==NULL) return 0;
        if(head->next==NULL) return true;
        
        Node* slow=head;
        Node* fast=head;
        
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            return 1;
        }
        return 0;
        
    }

