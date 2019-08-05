class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if(pRoot==nullptr)
            return true;
        int depth = 0;
        return isbalancecore(pRoot,depth); 
    }
    //递归函数，输入树和树的深度，判断该树是否平衡
    bool isbalancecore(TreeNode *pRoot , int &depth){
        if(pRoot==nullptr){
            depth = 0;
            return true;
        }
        int left = 0,right = 0;
        if( isbalancecore(pRoot->left,left)&& isbalancecore(pRoot->right,right)){
            //求左右子树是否平衡，及求左右子树的深度，得到当前子树的深度
            if(abs(left-right)<=1){ 
            depth = max(left+1,right+1);
           return true; 
            }
        }
            return false;
    }
};
