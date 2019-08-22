//题目：输入字符串，输出字符串的全排列
//递归方式相当于是深度优先搜索 (先序优先搜索)
//思路：每一个数字轮流当第一个数，递归截止条件：循环到了最后一个数字
//循环条件：当前是第一个数字，或者当前数字和第一个数字不同。
 
class Solution {
public:
    vector<string> Permutation(string str) {
    vector<string> res;
    core(res,str,0);
    sort(res.begin(),res.end());
    return res;
    }
    void core(vector<string>&res, string a, int i){
    if(i==a.size()-1){
    res.push_back(a);
    return;
    }
    for(int j = i;j < a.size();j++){ 
     //如果字符串中后面的字符和第一个字符不一样，就递归
     //但是第一个字符也参与递归 所以 i== j 也可以进入循环 
        if (i==j||a[i]!=a[j]){ 
            swap(a[i],a[j]); 
            core(res,a,i+1);
            swap(a[i],a[j]);
        }

    }
}
    
};
