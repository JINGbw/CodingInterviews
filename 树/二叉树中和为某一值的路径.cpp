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
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int> >res;
        vector<int> tmp; 
        if(!root)
            return res;
        core(root,expectNumber ,res ,tmp);
        return res;
    } 
    //找到root树中和为exceptnumber的子树，存到res中 //深度优先遍历，根左右 只能是前序遍历
    void core(TreeNode* root,int expectNumber , vector<vector<int> >& res,vector<int> &tmp){ 
        //先压入当前节点（根节点）
        tmp.push_back(root->val);
        //如果是叶子节点，且和为目标值  
        if(!root->right&&!root->left){
            if( expectNumber==root->val)
                res.push_back(tmp);
        }
        //找左子树是否有和为该值的路径
        if(root->left)
            core(root->left ,expectNumber -root->val , res,tmp );
        //再找右子树
        if(root->right)
            core(root->right, expectNumber -root->val , res,tmp );
        tmp.pop_back();
    }
};
//什么时候判断是否是叶子节点/是否为空/是否有左右子树
