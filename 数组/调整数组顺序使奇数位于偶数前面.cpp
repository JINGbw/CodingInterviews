//思路：使用双端队列，如果是奇数，就从队列的前端插入，否则从队列的后端插入 
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int n = array.size();
        deque<int> dq;
        //奇数放在前半部分，从原来数组的后面开始找 ,从前面插入到双端队列中
        // 偶数放在后半部分，从前开始找，插入双端队列的后面 
        for(int i = 0;i<n;i++){
            if (array[i]%2==0){
               //是偶数
                dq.push_back(array[i]); 
            }
            if(array[n-i-1]%2 == 1)
                //是奇数
                dq.push_front(array[n-i-1]);
            }
        array.assign(dq.begin(),dq.end()); 
    }
};
