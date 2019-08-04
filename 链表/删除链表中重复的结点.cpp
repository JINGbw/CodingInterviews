class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        ListNode*  pre =  nullptr; //指向不重复的最后一个结点
        ListNode*  cur = pHead; //指向重复的第一个节点
        ListNode*  next = nullptr ;
        while(cur){
            //如果当前节点与下一个节点值相同
            //如果cur是重复的第一个节点
            if (cur->next&&cur->next->val==cur->val){
                next = cur->next;
                while(next->next && next->next->val ==cur->val){  
                    next = next->next;
                }
                //next指向最后一个重复的元素
                //如果cur 是第一个重复的元素，也是第一个元素
                //删除cur到next ,将指向链表第一个元素的指针pHead指向pnext
                if(cur==pHead){
                    pHead = next->next;
                }
                //如果cur不指向第一个元素 删除cur到next ,那么将pre->next = Next->next
                else {
                    pre->next = next->next;
                }
                //向前移动
                cur = next->next;
                }
            //如果cur不是重复的第一个节点， 当前节点与下一个不同，向后走
            else {
                pre= cur;
                cur = cur->next;
                } 
            } 
        return pHead; 
    }
};
