bool isPalindrome(Node *head)
{
    if(head==NULL || head->next==NULL)
        return true;
    Node* fast=head;
    Node* slow=head;
    
    while(fast->next!=NULL and fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    
    //reversing other half
    Node* current = slow->next;
    Node *prev = NULL, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        }
    slow->next = prev;
    // reversal done
    
    
    slow=slow->next;
    
    while(slow!=NULL)
    {
        if(head->data!=slow->data)
        return false;
        
        head=head->next;
        slow=slow->next;
    }
    
    return true;
    
}
