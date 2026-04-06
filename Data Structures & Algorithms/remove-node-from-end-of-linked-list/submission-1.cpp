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
        //   int size = 0;

        //   ListNode* temp = head;
        //   ListNode* curr = head;
        //   while(temp){
        //       size++;
        //       temp = temp->next;
        //   }

        // if(n == size){
        //     ListNode* delete_node = head;
        //     head = head->next;
        //     delete delete_node;
        //     return head;
        // }
        //   int deleteNodepoint = size - n -1;

        //   while(deleteNodepoint--){
        //       curr=curr->next;
        //   }
        //   ListNode* delete_node = curr->next;
        //   curr->next = delete_node->next;
        //   delete(delete_node);

        //   return head;

       ListNode* dummy = new ListNode(0);
       dummy->next = head;

       ListNode* fast = dummy;
       ListNode* slow = dummy;
       //n+1 increase fast pointer
       for(int i=0; i<=n; i++){
         fast=fast->next;
       }

       while(fast){
          fast=fast->next;
          slow=slow->next;
       }

       //delete the slow next pointer
       ListNode* delete_node = slow->next;
       slow->next = delete_node->next;
       delete(delete_node);

       return dummy->next;
    }
};
