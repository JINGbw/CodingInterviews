//题目：求连续数组的最大和
//方法1
//由于是连续子数组，所以用两个数字就可以记录，一个数字记录全局的最大和，一个数字记录当前字数租的最大和
//如果当前最大和小与0 ，就将最大和改为a[i],否则直接累加 
//动态规划的状态转移方程：
//dp[i] = array[0] , (i = 0 ) 
//dp[i] = max(dp[i-1]+array[i],array[i]); (i = 1,2 ,3 ... n-1) 
//方法2（暴力方法）
//开辟数组存放，每一个长度都求一个最大和 最后选择其中最大的。
//方法3 使用一维连续数组记录当前数为结尾的最大和 
class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
    //边界条件：数组为空
        if (array.empty())
            return -1;
        vector<int> dp(array.size(),0);
        int maxx =  array[0];
        dp[0]=  array[0] ;
        for(int i = 1;i<array.size();i++){
            dp[i]=max(dp[i-1]+array[i],array[i]);
            maxx = max(maxx,dp[i]);
        }
        return  maxx;
    }
};
