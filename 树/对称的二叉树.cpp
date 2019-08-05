class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot)
    { if(pRoot==nullptr)
            return true;
        return isbalancecore(pRoot,pRoot);
    }
    bool isbalancecore(TreeNode *p1,TreeNode *p2){
        if(p1==nullptr&&p2==nullptr)
            return true;
        if(p1==nullptr||p2==nullptr||p1->val!=p2->val)
            return false; 
        return isbalancecore(p1->left,p2->right)&&isbalancecore(p1->right,p2->left) ;
    }
 
};
