//使用三个指针，一个头指针进行反转 
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
         ListNode* next = nullptr;
         ListNode* newhead = nullptr;
         ListNode* cur = pHead;
         ListNode* pre = nullptr;
        while(cur){
            next = cur->next;
            
            if(!next){
                newhead = cur; //注意这里不能退出，因为还要连接上之前的节点
            }
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return newhead;
    }
};
