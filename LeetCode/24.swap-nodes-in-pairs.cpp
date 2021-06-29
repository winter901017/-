/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
 */

// @lc code=start
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
    ListNode* swapPairs(ListNode* head) 
    {
        ListNode* virtualHead = new ListNode(0);
        virtualHead->next = head;

        ListNode* cur = virtualHead;
        while(cur != NULL &&cur->next != NULL && cur->next->next != NULL)
        {
            ListNode* temp = cur->next;
            cur->next = cur->next->next;
            temp->next = cur->next->next;
            cur->next->next = temp;
            cur = cur->next->next;
        }

        head = virtualHead->next;
        delete virtualHead;
        return head;    
    }
};
// @lc code=end

