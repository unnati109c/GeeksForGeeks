//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    /* Pointer to traverse the linked list */
    Node* current = head; 
 
    /* Pointer to store the next pointer of a node to be deleted*/
    Node* next_next; 
     
    /* do nothing if the list is empty */
    if (current == NULL) 
    return NULL; 
 
    /* Traverse the list till last node */
    while (current->next != NULL) 
    { 
        /* Compare current node with next node */
        if (current->data == current->next->data) 
        { 
            /* The sequence of steps is important*/       
            next_next = current->next->next; 
            free(current->next); 
            current->next = next_next; 
        } 
        else /* only advance if no deletion */
        { 
            current = current->next; 
        } 
    } 
    return head;
}