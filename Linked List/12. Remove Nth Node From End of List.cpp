ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==NULL) return NULL;
        if(head->next==NULL)
        {
            delete head;
            return NULL;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev;
        
        int count=0;
        while(count<n)
        {
            fast=fast->next;
            count++;
        }
        if(fast==NULL)
        {
            
            head=head->next;
            delete slow;
            return head;
            
        }
        
        while(fast!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        
        prev->next=slow->next;
        delete slow;
        
        return head;
        
    }