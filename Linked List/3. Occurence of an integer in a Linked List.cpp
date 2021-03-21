/*Given a singly linked list and a key, count the number of occurrences 
of given key in the linked list.*/

int count(struct node* head, int search_for)
{
        int count=0;
        while(head!=NULL)
        {
            if(head->data == search_for)
            count++;
            
            head=head->next;
        }
        return count;
}