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
    ListNode* reverse(ListNode* &h){
        h->next->next=h;
        h->next=NULL;
        reverse(h->next);
        return h;
    }
    int count(ListNode* h){
        ListNode* t=h;
        int count1=0;
        while(t!=NULL){
            count1++;
            t=t->next;
        }
        return count1;
    }
    bool isPalindrome(ListNode* h) {
        ListNode* h1=reverse(h);
        int c=count(h);
        c=c/2;
        ListNode* t=h;
        ListNode* t1=h1;
        while(c>0){
            if(h1->val!=h->val){
                return false;
            }
            c--;
        }
        return true;

    }
};
