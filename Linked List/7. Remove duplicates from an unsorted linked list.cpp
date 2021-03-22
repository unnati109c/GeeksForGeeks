Node * removeDuplicates( Node *head) 
    { 
        //using set to store already seen values in list. 
        unordered_set<int> seen; 
      
        //using two pointers one of which stores first node other null.
        struct Node *curr = head; 
        struct Node *prev = NULL; 
        
        //traversing over the linked list.
        while (curr != NULL) 
        { 
            //if data at current node is already present in set, we skip the 
            //current node and store the node next to current in link of prev. 
            if (seen.find(curr->data) != seen.end()) 
            { 
               prev->next = curr->next;
               //deleting current node which contains duplicates. 
               delete (curr);             
            }
            
            //else we just insert the data at current node in set and update 
            //prev to the current node.
            else
            { 
               seen.insert(curr->data);
               prev = curr; 
            }
            //updating current to the next node of prev node.
            curr = prev->next; 
        } 
        return head;
    }