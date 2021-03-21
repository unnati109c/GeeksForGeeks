int getMiddle(Node *head)
{
   Node* slow=head;
   Node* fast= head;
   
   while(fast!=NULL and fast->next!=NULL)
   {
       slow=slow->next;
       fast=fast->next->next;
       
   }
   return slow->data;
   
}