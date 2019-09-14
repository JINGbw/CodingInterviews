class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead == nullptr || k<= 0)
            return nullptr;
        ListNode *cur = pListHead;
        for(int i = 0 ; i< k-1 ; i++){
            if(cur->next){
                cur = cur->next;
            }
            else{
                return nullptr;
            }
        }
        ListNode * pre = pListHead; 
        while(cur->next){
            cur = cur->next;
            pre = pre->next;
        }
        return pre;
    }
};
