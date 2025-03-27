class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1 = list1, *l2 = list2, *l3 = nullptr, *l4 = nullptr;

        while (l1 || l2) { 
            int a;
            if(!l1){a=l2->val;
            l2 = l2->next;}
            else if (!l2){a=l1->val;l1 = l1->next;}
            else{
            a = min(l1->val, l2->val);
            if (l1->val < l2->val) l1 = l1->next;
            else l2 = l2->next;}
            ListNode* b = new ListNode;
            b->val = a;
            if (!l3) {
                l3 = b;
                l4 = l3;
            } 
            else {
                l4->next = b;
                l4 = b;
            }
        }
        if (l4) l4->next = nullptr;
        return l3;
    }
};
