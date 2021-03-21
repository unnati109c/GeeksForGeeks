/*Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.
For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.
Note: You need to swap the nodes, not only the data. If only data is swapped then driver will print -1.

Input:
LinkedList: 1->2->2->4->5->6->7->8
Output: 2 1 4 2 6 5 8 7
Explanation: After swapping each pair considering (1,2), (2, 4), (5, 6).. so
on as pairs, we get 2, 1, 4, 2, 6, 5, 8, 7 as a new linked list.

The task is to complete the function pairWiseSwap() which takes the head node 
as the only argument and returns the head of modified linked list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/




Node* pairWiseSwap(struct Node* head) 
    {
        if(head==NULL || head->next==NULL)
        return head;
        
        Node* remaining= head->next->next;
        Node* new_head= head->next;
        
        head->next->next=head;
        
        head->next= pairWiseSwap(remaining);
        
        return new_head;
        
    }