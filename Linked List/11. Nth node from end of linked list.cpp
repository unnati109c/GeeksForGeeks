int getNthFromLast(Node *head, int n)
{
      struct Node *slow_ptr = head;
      struct Node *fast_ptr = head;
     
      int count = 0;
      
         while( count < n )
         {
            if(fast_ptr == NULL)
            {
               return -1;
            }
            fast_ptr = fast_ptr->next;
            count++;
         } /* End of while*/
         
         if(fast_ptr == NULL)
         {
                return slow_ptr->data;
         }
         else
         {
           while(fast_ptr != NULL)
           {
              slow_ptr = slow_ptr->next;
              fast_ptr  = fast_ptr->next;
           }
           return slow_ptr->data;
         } 
}