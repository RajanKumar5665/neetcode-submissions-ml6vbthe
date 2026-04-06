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
          int size = 0;

          ListNode* temp = head;
          ListNode* curr = head;
          while(temp){
              size++;
              temp = temp->next;
          }

        if(n == size){
            ListNode* delete_node = head;
            head = head->next;
            delete delete_node;
            return head;
        }
          int deleteNodepoint = size - n -1;

          while(deleteNodepoint--){
              curr=curr->next;
          }
          ListNode* delete_node = curr->next;
          curr->next = delete_node->next;
          delete(delete_node);

          return head;
    }
};
