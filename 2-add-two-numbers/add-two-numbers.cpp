class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sumHead = nullptr;
        ListNode* sumTail = nullptr;

        ListNode* p1 = l1;
        ListNode* p2 = l2;

        int carry = 0;
        while(p1 != NULL && p2 != NULL){
            int digit = p1->val + p2->val;
            digit += carry;

            if(digit > 9){
                carry = 1;
                digit = digit % 10;
            }else{
                carry = 0;
            }

            if(sumHead == nullptr){
                sumHead = new ListNode(digit);
                sumTail = sumHead;
            }else{
                ListNode* newNode = new ListNode(digit);
                sumTail->next = newNode;
                sumTail = newNode;
            }
            p1 = p1->next;
            p2 = p2->next;
        }

        while(p1 != NULL){
            int digit = p1->val;
            digit += carry;

            if(digit > 9){
                carry = 1;
                digit = digit % 10;
            }else{
                carry = 0;
            }

            if(sumHead == nullptr){
                sumHead = new ListNode(digit);
                sumTail = sumHead;
            }else{
                ListNode* newNode = new ListNode(digit);
                sumTail->next = newNode;
                sumTail = newNode;
            }
            p1 = p1->next;
        }

        while(p2 != NULL){
            int digit = p2->val;
            digit += carry;

            if(digit > 9){
                carry = 1;
                digit = digit % 10;
            }else{
                carry = 0;
            }

            if(sumHead == nullptr){
                sumHead = new ListNode(digit);
                sumTail = sumHead;
            }else{
                ListNode* newNode = new ListNode(digit);
                sumTail->next = newNode;
                sumTail = newNode;
            }
            p2 = p2->next;
        }

        if(carry == 1){
            if(sumHead == nullptr){
                sumHead = new ListNode(1);
                sumTail = sumHead;
            }else{
                ListNode* newNode = new ListNode(1);
                sumTail->next = newNode;
                sumTail = newNode;
            }
        }

        return sumHead;
    }
};