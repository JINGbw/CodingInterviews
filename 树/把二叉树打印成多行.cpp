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
//思路：使用两个队列，存下来每一行的时候，把下一行存到下一个队列中 
class Solution {
public:
        vector<vector<int> > Print(TreeNode* pRoot) {

            vector<vector<int> > res;
            if (pRoot == nullptr)
                return res;
            queue< TreeNode* >qq[2];
            qq[0].push(pRoot);
            while(!qq[0].empty() || !qq[1].empty()){ 
                vector<int> v[2];
                while(!qq[0].empty()){
                    TreeNode* tmp = qq[0].front();
                    v[0].push_back(tmp->val); 
                    if(tmp->left)
                        qq[1].push(tmp->left);
                    if(tmp->right)
                        qq[1].push(tmp->right); 
                     qq[0].pop();
                } 
                if(!v[0].empty()){
                    res.push_back(v[0]); 
                }
             while(!qq[1].empty()){
                    TreeNode *tmp = qq[1].front();
                    v[1].push_back(tmp->val);
                    if(tmp->left)
                        qq[0].push(tmp->left);
                    if(tmp->right)
                        qq[0].push(tmp->right);
                    qq[1].pop();
             }
                if(!v[1].empty()){
                    res.push_back(v[1]); 
                }
            }
            return res;
        }
  //注意： ||不要错写成&& 判断是否为空要用.empty()  
};
