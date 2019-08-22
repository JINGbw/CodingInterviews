/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        TreeNode * res = nullptr;
        core(pRootOfTree , &res);
        TreeNode* phead = res; 
        //走到双向链表的最左边
        //第一个判断phead是否为空是为了防止返回结果为空 
        while(phead &&phead->left ){
            phead = phead->left;
        }
        return phead;
        
    }
    void core(TreeNode* root, TreeNode**res){
        if(!root)
            return ;
        TreeNode* cur = root;
        //递归左边
        if(cur->left)
            core(cur->left, res);
        //当前点指向递归结果
        cur->left = (*res);
        //递归结果如果不为空递归结果指向当前点
        if((*res))
            ((*res)->right) = cur;
        // 递归结果向后走  
        (*res) = cur;
        //递归右边
        if(cur->right)
            core(cur->right,res);
    }
};
