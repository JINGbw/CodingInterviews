class Solution {
public:
//题目：输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。
 //思路：后序遍历序列的最后一个元素是根节点 ，二叉搜索树的左子树所有节点都比根节点小，右子树都比根节点大
// 1. 从后序遍历的第一个元素开始，找到比最后一个元素大的第一个元素，下标为i,这个元素左边[0,i-1]的应该是左子树
// 2. 从第i个元素一直到第n-1个元素是右子树，所有节点的值应该小于根节点的值，如果比根节点的值大，返回false;
// 3. 递归左子树 (.begin(),.begin()+i)
// 4. 递归右子树 (.begin()+i , .end()-1)
 // 注意：数组的.end() 指的是最后一个元素后面一个位置 
 
 bool VerifySquenceOfBST(vector<int> sequence) {
        if( sequence.size() ==0)
            return false;
        if( sequence.size() ==1)
            return true;
        int n = sequence.size()-1;  
        int i = 0;
        for( ;i<n ;i++) {
            if(sequence[i] >sequence[n])
                break;
        }
        //根节点只有左子树的情况 
        if(i == n )
          return true;
        int j = i ;
        for(; j<n ; j++){
            if(sequence[j]< sequence[n] )
                return false;
        }
        bool  left = true;
        if (i> 0 )
            left =  VerifySquenceOfBST(vector<int>(sequence.begin() ,  sequence.begin()+ i));
         bool  right = true;
        if (i> 0 )
             right=  VerifySquenceOfBST(vector<int>(sequence.begin()+ i  ,  sequence.end()-1));
      
        return (right&&left);
    }
};
