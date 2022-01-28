// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem19.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* virtualHead = new ListNode(0);
        virtualHead->next = head;

        ListNode* cur = virtualHead;
        int size = 0;
        while(cur != nullptr)
        {
            size++;
            cur = cur->next;
        }

        cur = virtualHead;
        n = size - n - 1;
        while(n--)
        {
            cur = cur->next;
        }
        
        ListNode* del = cur->next;
        cur->next = cur->next->next;
        delete del; 
        return virtualHead->next;
    }
};
// @lc code=end

