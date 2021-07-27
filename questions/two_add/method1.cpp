#include <iostream>
#include "method1.hpp"

Solution::Solution()
{
    std::cout << "Construct" << std::endl;
}

Solution::~Solution()
{
    std::cout << "Destruct" << std::endl;
}

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* l3 = new ListNode(-1);
    ListNode* hl3 = l3;
    int c = 0, end1 = 0, end2 = 0;
    while(end1 == 0 || end2 == 0 || c == 1)
    {
        l3->val = (l1->val + l2->val + c) % 10;
        c = (l1->val + l2->val + c) / 10;
        if(l1->next == nullptr)
        {
            l1->val = 0;
            end1 = 1;
        }
        else
        {
            l1 = l1->next;
        }

        if(l2->next == nullptr)
        {
            l2->val = 0;
            end1 = 1;
        }
        else
        {
            l2 = l2->next;
        }

        if(end1 == 0 || end2 == 0 || c == 1)
        {
            l3 -> next = new ListNode(-1);
            l3 = l3 -> next;
        }
    }
    return l3;
}

