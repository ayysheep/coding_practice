#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head||!head-next)
        {
            return false;
        }
        ListNode* back=head;
        ListNode* front=head->next;
        while (front!=back)
        {
            if (!front||!front->next)
            {
                return false;
            }
            back=back->next;
            front=front->next->next;
        }
        return true;
        
    }
    };