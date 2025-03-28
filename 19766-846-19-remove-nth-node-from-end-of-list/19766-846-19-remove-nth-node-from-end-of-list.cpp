class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n1) {
        if (!head || !head->next)return nullptr;
        ListNode* h;
        int n;
        for (h = head, n = 0; h; h = h->next, n++); 
        n = n - n1;
        if (n==0) { 
            h = head->next;
            delete head;
            return h;
        }
        for (h = head; n > 1; h = h->next, n--); 
        ListNode* h1 = h->next;
        if (h && h->next)  
            h->next = h->next->next;
        delete h1;
        return head;
    }
};
