/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return head;
        set<ListNode*>s;
        ListNode* currentNode = head;
        while(s.find(currentNode)==s.end()){
            if(currentNode->next==NULL){
                return NULL;
            }
            s.insert(currentNode);
            currentNode=currentNode->next;
        }
        return currentNode;

    }
};
