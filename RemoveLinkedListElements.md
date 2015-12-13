http://www.lintcode.com/zh-cn/problem/remove-linked-list-elements/

Remove all elements from a linked list of integers that have value val
样例
Given 1->2->3->3->4->5->3, val = 3, you should return the list as1->2->4->5

```cpp
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
    /**
     * @param head a ListNode
     * @param val an integer
     * @return a ListNode
     */
    ListNode *removeElements(ListNode *head, int val) {
        // Write your code here
        ListNode* cur = new ListNode(-1);
        ListNode* pre = cur;
        ListNode* ret = NULL;
        cur->next = head;
        while(cur->next) {
            while(cur->next && cur->next->val == val) {
                cur = cur->next;   
            }
            if (!cur->next) {
                pre->next = NULL;
                break;
            }
            pre->next = cur->next;
            pre = pre->next;
            if (!ret)
                ret = pre;
            cur = cur->next;
        }
        return ret;
    }
};
```
