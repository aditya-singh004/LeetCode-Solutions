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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        ListNode* p= head;
        int cnt=0;

        while(p){
            cnt++;
            if(cnt==left)   break;
            p=p->next;
        }
        stack<int> st;
        st.push(p->val);
        ListNode* q= p->next;

        while(q){
            cnt++;
            st.push(q->val);
            if(cnt==right)  break;
            q=q->next;
        }
        while(!st.empty()){
            p->val=st.top();
            st.pop();
            p=p->next;
        }
        return head;
    }
};