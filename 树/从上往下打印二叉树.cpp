//二叉树的层次遍历，返回一个数组，数组中存放二叉树的层次遍历结果，每一行从左到右存放
//使用一个队列 ，每次取出一个，先压入左节点，再压入右节点
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
     vector<int>  res;
        if (!root)
            return res;
        queue<TreeNode *> qq;
        qq.push(root);
        while(!qq.empty()){
            TreeNode *tmp = qq.front();
            res.push_back(tmp->val);
            if(tmp->left)
                qq.push(tmp->left);
             if(tmp->right)
                qq.push(tmp->right);
            qq.pop();
        }
        return res;
    }
};
