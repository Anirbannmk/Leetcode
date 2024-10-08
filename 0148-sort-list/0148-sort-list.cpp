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
    ListNode* sortList(ListNode* head) {
         if(head==NULL) return head;
         vector<int>vec;
          ListNode* temp=head;
          while(temp){
            vec.push_back(temp->val);
            temp=temp->next;
          } 
          sort(vec.begin(),vec.end());
          temp=head;
          int i=0;
          while(temp){
            temp->val=vec[i];
            temp=temp->next;
            i++;
          }
          return head;
    }
};