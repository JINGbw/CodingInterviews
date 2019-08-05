class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
     //递归计算二叉树的深度 
    if(pRoot==nullptr)
        return 0;
     int left = TreeDepth(pRoot->left);
     int right = TreeDepth(pRoot->right);
     return max(left+1,right+1);
    }
};
