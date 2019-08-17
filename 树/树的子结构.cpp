 bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
       //如果树2为空，空树不是任意一个树的子结构 返回false;
        if(pRoot2 == nullptr)
         return false;
        //如果树2不为空，树1 为空 ，那么树2也不是空树的子结构，返回false;      
        if(pRoot1 == nullptr)
            return false; 
         bool res = false;
        
            if(pRoot1->val == pRoot2->val){
            res = has2(pRoot1, pRoot2 );
            }
        if(!res){
           res =  HasSubtree(  pRoot1->left,   pRoot2);
        }
        if(!res){
           res = HasSubtree(pRoot1->right,pRoot2);
        } 
        
        return res; 
    }
    bool DoesAhasB(TreeNode* pRoot1, TreeNode* pRoot2){]
      //当前两个树的根节点值是相等的，判断树1 是否有树2的子结构
        //循环停止条件是两棵树节点值不同
        if (pRoot2 == nullptr){ 
            return true;
        }
        if(pRoot1 == nullptr){
            return false;
        }
        if (pRoot1->val!=pRoot2->val){
            return false;
        }
        return (DoesAhasB(pRoot1->left,pRoot2->left)&&DoesAhasB(pRoot1->right,pRoot2->right) );
         
         
    }
