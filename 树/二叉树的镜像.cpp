class Solution {
public:
    void Mirror(TreeNode *pRoot) {    
        // 递归的思路 1.交换左右子树 2. 分别将左右子树做镜像（一二两步顺序可以调换）
        if(pRoot==nullptr)
            return ;
        Mirror(pRoot->left);
        Mirror(pRoot->right);
        TreeNode *tmp = pRoot->right;
        pRoot->right = pRoot->left;
        pRoot->left = tmp;
        
    }
};
