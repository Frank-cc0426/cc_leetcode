#include <iostream>

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL){}
};

class Solution
{
public:
    Solution();
    ~Solution();
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};