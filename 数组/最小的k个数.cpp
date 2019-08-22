//思路:求最小的k个数用最大堆
//注意边界条件：牛客网段错误是因为没有考虑 k<=0 的情况

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        if(input.empty())
            return {};
        if( k <= 0 ||k > input.size()){
            return {};
        }
        vector<int> maxdui(input.begin(),input.begin()+k);
     /*   for(int i = 0 ;i<k ;i++){
            maxdui.push_back(input[i]);
        } */
        make_heap(maxdui.begin(), maxdui.end(),less<int>());
        for(int i = k; i<input.size() ; i++){
            if(input[i] < maxdui[0]){
                pop_heap(maxdui.begin(), maxdui.end(),less<int>());
                maxdui.pop_back();
                maxdui.push_back(input[i]);
                push_heap(maxdui.begin(), maxdui.end(),less<int>());
            }
        } 
        return maxdui;
    }
};
