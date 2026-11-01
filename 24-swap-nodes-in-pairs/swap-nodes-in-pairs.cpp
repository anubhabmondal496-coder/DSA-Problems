
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp =head;
        int count = 0;
        while(count < 2){
            if(temp == NULL){
                return head;
            }
            temp = temp->next;
            count++;
        }
        ListNode* prev = swapPairs(temp);
        temp = head;
        count = 0;
        while(count < 2){
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            count++;
        }
        return prev;
    }
};