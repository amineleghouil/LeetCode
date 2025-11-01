/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack <ListNode*> s ;
        ListNode *h ,*ans;
        h = head;
        ans = head;
        while(h){
            while(!s.empty() && h->val>(s.top())->val)s.pop();
            if(!s.empty())(s.top())->next=h; 
            else ans = h;
            s.push(h);
            h=h->next;
        }
        return ans;

    }
};