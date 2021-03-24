//  https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

int getDecimalValue(ListNode* head) {
        ListNode* p=head;
        int c=0;
        while (p)
        {
            c++;
            p=p->next;
        }
        p=head;
        int decimal=0;
        while (p)
        {
            c--;
            if(p->val==1)
            {
                decimal=decimal+pow(2,c);
            }
            p=p->next;
        }
        return decimal;
        
    }