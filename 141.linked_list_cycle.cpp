#include <unordered_set>

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> visitedAddresses;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            if (visitedAddresses.count(curr)) {
                return true; 
            }
            visitedAddresses.insert(curr);
            curr = curr->next;
        }
        return false; 
    }
};