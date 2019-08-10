class Solution {
public:
//- 题目：给定一棵二叉搜索树，请找出其中的第k小的结点。例如， （5，3，7，2，4，6，8） 中，按结点数值大小顺序第三小结点的值为4。 
//- 思路：使用中序遍历的递归形式。注意：二叉搜索树的中序遍历是升序的。时间：O(K) 空间：O(1)
    //- k作为变量，使用引用传递放在递归函数的形参中，每一次递归, 如果当前节点不是第k个，那么k--;知道k==1返回当前根节点。
//- 注意：将k进行引用传递是为了记录访问的节点个数，也可以使用全局变量index记录访问的节点个数，就不用另外写一个递归函数了。

    int index = 0;
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
         if(pRoot==nullptr)
             return pRoot;
         TreeNode *left =KthNode( pRoot->left, k);
        if(left)
            return left;
         if(!left){
             index++;
             if(index==k)
                 return pRoot;
         }
        TreeNode *right =KthNode( pRoot->right, k);
        if(!right)
            return nullptr;
        
        return right;
    }

    
};
