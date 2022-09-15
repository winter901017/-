/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head = new ListNode(-1);
        ListNode *tmp = new ListNode(0);
        head->next = tmp;

        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val >= list2->val)
            {
                tmp->next = list2;
                list2 = list2->next;
            }
            else
            {
                tmp->next = list1;
                list1 = list1->next;
            }
            tmp = tmp->next;
        }

        if (list1)
        {
            tmp->next = list1;
        }

        if (list2)
        {  
            tmp->next = list2;
        }

        return head->next->next;
    }
};
// @lc code=end
