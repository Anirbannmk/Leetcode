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
    ListNode *temp=head;
  vector<int>vec;
  while(temp){
    vec.push_back(temp->val);
    temp=temp->next;
  }
  int i=0;
  int j=vec.size()-1;
  while(i<j){
    if(vec[i]!=vec[j])
      return 0;
    i++;
  j--;
  }
  return 1;
    }
};