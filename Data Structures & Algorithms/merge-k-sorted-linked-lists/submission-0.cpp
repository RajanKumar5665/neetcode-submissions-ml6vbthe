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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
           vector<int> result;
            
            for(int i=0; i<lists.size(); i++){
                 
                 ListNode* temp = lists[i];

                 while(temp){
                     result.push_back(temp->val);
                     temp = temp->next;
                 }

            }
            if(result.size() == 0) return NULL;
           sort(result.begin(), result.end());
            
             ListNode* head = new ListNode (result[0]);

             ListNode* curr = head;
           for(int i=1; i<result.size(); i++){
                ListNode* newNode = new ListNode(result[i]);
                curr->next = newNode;
                curr = curr->next;
           }
         
         return head;

    }
};
