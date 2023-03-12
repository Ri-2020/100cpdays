// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Make Listnode class as used in the code becow

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int x, ListNode* next): val(x), next(next) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(): val(0), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int temp = (l1->val) + (l2->val );
        int carry = temp/10;
        temp = temp%10;
        l1 = l1->next;
        l2 = l2->next;
        ListNode* root = new ListNode(temp, nullptr);
        ListNode* node = root;
        while(l1 != nullptr and l2 != nullptr ){
            temp =  l1->val + l2->val + carry;
            carry = temp/10;
            temp = temp%10;
            node->next = new ListNode(temp, nullptr);
            node = node->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1 != nullptr){
            temp = l1->val + carry ;
            carry = temp/10;
            temp = temp%10;
            node->next = new ListNode(temp, nullptr);
            node = node->next;
            l1 = l1->next;
        }
        while(l2 != nullptr){
            temp = l2->val + carry;
            carry = temp/10;
            temp = temp%10;
            node->next = new ListNode(temp, nullptr);
            node = node->next;
            l2 = l2->next;
        }
        while(carry){
            temp = carry %10;
            carry = carry /10;
            node->next = new ListNode(temp, nullptr);
            node = node->next;
        }
        return root;
    }
};