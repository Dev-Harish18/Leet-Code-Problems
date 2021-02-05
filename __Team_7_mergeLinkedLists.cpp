ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head,*end,*i=l1,*j=l2;
        if(i==nullptr && j==nullptr)
            return nullptr;
        else if(i==nullptr)
            return j;
        else if(j==nullptr)
            return i;
        else{
            if(i->val>=j->val){
                head=j;
                j=j->next;
            }else{
                head=i;
                i=i->next;
            }
            end=head;
            
            while(i && j){
                if(i->val >= j->val){
                    end->next=j;
                    end=end->next;
                    j=j->next;
                }else{
                    end->next=i;
                    end=end->next;
                    i=i->next;
                }
            }
            if(i)
                end->next=i;
            if(j)
                end->next=j;
        }
        return head;
    }