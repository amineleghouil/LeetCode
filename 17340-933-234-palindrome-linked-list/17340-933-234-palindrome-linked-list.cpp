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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* h=head;
        while (h){
            s.push(h->val);
            h=h->next;
        }
        h=head;
        while(h){
            if (h->val != s.top())return false;
            s.pop();
            h=h->next;
        }
        return true;

    }
};