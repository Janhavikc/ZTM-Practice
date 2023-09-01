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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int currentPos=1;
        ListNode* currentNode = head;
        ListNode* start = head;
        while(currentPos<left){
            start=currentNode;
            currentNode=currentNode->next;
            currentPos++;
        }
        ListNode* newNode=NULL;
        ListNode* tail=currentNode;
        while(currentPos>=left && currentPos<=right){
            ListNode* next=currentNode->next;
            currentNode->next = newNode;
            newNode=currentNode;
            currentNode = next;
            currentPos++;
        }
        start->next=newNode;
        tail->next=currentNode;
        if(left>1){
            return head;
        }else{
            return newNode;
        }
    }
};
