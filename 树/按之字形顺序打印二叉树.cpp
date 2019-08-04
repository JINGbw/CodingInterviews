/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/ 
//题目：请实现一个函数按照之字形打印二叉树，即第一行按照从左到右的顺序打印，第二层按照从右至左的顺序打印，
//第三行按照从左到右的顺序打印，其他行以此类推。
//思路：使用两个栈和两个数组 
//判断栈0 是否为空，如果不为空，取出一个向栈1中先压入左边的再压入右边的。
//判断栈1 是否为空，如果不为空，取出一个向栈2中先压入右边的再压入左边的。

class Solution {
public:
    vector<vector<int> > Print(TreeNode* pRoot) {
        stack<TreeNode* > s[2];
         vector<vector<int> > res;
        if (pRoot==nullptr)
            return res;
        vector<int> v[2];
        //两个栈，两个数组
        s[0].push(pRoot);
        while(!s[0].empty()||!s[1].empty()){
            //s[0]存放 0 2 4 
            while (!s[0].empty()){
                TreeNode *tmp = s[0].top();
                if (tmp->left) s[1].push(tmp->left);
                if (tmp->right) s[1].push(tmp->right);
                v[0].push_back(tmp->val);
                s[0].pop();
                tmp =nullptr;
            }
            if (!v[0].empty()){
                res.push_back(v[0]);
                v[0].clear();
            }
            //s[1]存放 1 3 5 
            while (!s[1].empty()){
                TreeNode *tmp = s[1].top(); 
                if (tmp->right) s[0].push(tmp->right);
                if (tmp->left) s[0].push(tmp->left);
                v[1].push_back(tmp->val);
                s[1].pop();
                tmp =nullptr;
            }
            if (!v[1].empty()){
                res.push_back(v[1]);
                v[1].clear();
            } 
        } 
        return res;
    }
    
};
