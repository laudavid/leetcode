/**
* 题目描述
* 输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> ret;
        if(head != NULL){
            ret = printListFromTailToHead(head->next);
            ret.push_back(head->val);
        }
        return ret;
    }
};


/*

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> ret;
        if(head == NULL){
            return ret;
        }
        ListNode *node=head, *pre=NULL, *tmp;
        while(node->next != NULL){
            tmp=node->next;
            node->next=pre;
            pre=node;
            node=tmp;
        }
        while(node != NULL){
            ret.push_back(node->val);
            node=node->next;
        }
        return ret;
    }
};

*/
