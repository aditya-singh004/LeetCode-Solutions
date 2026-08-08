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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* q = head;
        ListNode* p = head;

        

        while (q && n > 0) {
            q = q->next;
            n--;
        }
        if(!q){
            p=head;
            head=head->next;
            delete(p);
            return head;
        }

        while (q && q->next) {
            p = p->next;
            q = q->next;
        }

        ListNode* t = p->next;
        p->next = t->next;

        delete (t);

        return head;
    }
};