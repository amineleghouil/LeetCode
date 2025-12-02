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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp = head;
        ListNode *check = nullptr;
        int n,m,p,gcd = 1;
        while(temp->next != nullptr && temp != nullptr){
            gcd = 1;
            n = temp->val;
            m = temp->next->val;
            check = temp->next;
            if(n > m) p = m;
            else p = n;
            for(int i = p; i > 1; i--){
                if(n % i == 0 && m % i == 0){
                    gcd *= i;
                    break;
                }
            }
            ListNode *newnode = new ListNode();
            temp->next = newnode;
            newnode->next = check;
            newnode->val = gcd;
            temp = check;
        }
        return head;
    }
};