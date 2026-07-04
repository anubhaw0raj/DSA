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
        if( head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        int c = 0 , c0 = 0 , c1 = 0, c2 = 0 ;
        ListNode* t0 = head;
        while(t0 != nullptr){
            c++;
            t0 = t0->next;
        }
        if(c == n){
            return head->next;
        }
    
        c0 = c - (n-1);

        ListNode* t1 = head;
        while(t1 != nullptr){
            c1++;
            if(c1 == c0){
                break;
            }
            t1 = t1->next;
        }

        ListNode* t2 = head;
        while(t2 != nullptr){
            c2++;
            if(c2 == (c1-1)){
                break;
            }
            t2 = t2->next;
        }

        t2->next = t1->next;
        return head;
    }
};