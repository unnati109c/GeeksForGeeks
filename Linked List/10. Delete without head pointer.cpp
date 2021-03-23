//Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
        //storing the node next to given node in a pointer.	
    	Node* temp = del->next;
    	
    	//copying the data of pointer in the given current node.
    	del->data = temp->data;
    	
    	//storing the next node to pointer in link part of current node.
    	del->next = temp->next;

    	// freeing memory.
    	free(temp);
    	
    }