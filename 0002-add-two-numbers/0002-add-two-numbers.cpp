class Solution {
public:
    void insert(ListNode* & l1, int s) {
        ListNode* l = new ListNode;
        l->val = s;
        l->next = nullptr;
        if (!l1)
            l1 = l;
        else {
            ListNode* cur;
            for (cur = l1; cur->next; cur = cur->next);
            cur->next = l;
        }
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h = nullptr;
        int value = 0;
        int s;
        while (l1 && l2) {
            s = l1->val + l2->val + value;
            value = s / 10;
            s = s % 10;
            insert(h, s);
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l2) {
            s = l2->val + value;
            value = s / 10;
            s = s % 10;
            insert(h, s);
            l2 = l2->next;
        }
        while (l1) {
            s = l1->val + value;
            value = s / 10;
            s = s % 10;
            insert(h,s);
            l1 = l1->next;
        }
        if(value)
        insert(h,value);
        return h;
    }
};