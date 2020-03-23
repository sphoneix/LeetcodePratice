/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第N个节点
 */

// @lc code=start
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* front = head;
        ListNode* back = head;
        if (head->next == NULL) {
            return NULL;
        }
        while (n >= 0) {
            if (back == NULL) {
                return head->next;
            }
            back = back->next;
            n--;
        }
        while (back) {
            front = front->next;
            back = back->next;
        }
        front->next = front->next->next;
        return head;
    }
};
// @lc code=end

