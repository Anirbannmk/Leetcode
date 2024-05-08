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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  ListNode *h1=l1;
  ListNode *h2=l2;
  int c=0;
  int sum=0;
   ListNode *l3=NULL;
   ListNode *t;
  while(h1!=NULL||h2!=NULL){
    int a=(h1!=NULL)?h1->val:0;
    int b=(h2!=NULL)?h2->val:0;
    sum=a+b+c;
    c=sum/10;
    ListNode *newnode=new ListNode(sum%10);
    if(l3==NULL){
        l3=t=newnode;
    }
    else{
        t->next=newnode;
        t=t->next;
    }
    if(h1){
      h1=h1->next;
    }
     if(h2){
      h2=h2->next;
    }
  }
  if(c>0){
        ListNode *newnode=new ListNode(c);
        t->next=newnode;
  }
  return l3;
    }
};