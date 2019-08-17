class Solution { 
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if(pushV.size()!=popV.size())
            return false;
        stack<int>tmp;
        int k =0 ;
        //1. 处理 pushV
        for(int i = 0;i<pushV.size();i++){
            tmp.push(pushV[i]);
            if(tmp.top() == popV[k]){
                tmp.pop();
                k++;
            }
        }
        //2.处理模拟栈 
        while(!tmp.empty()){
            if(tmp.top()==popV[k]){
                tmp.pop();
                k++;
            }
            else {
                return false;
            }    
        }
        //3. 处理PopV
        //k指向的是pop数组中下一个应该弹出的数字 的下标，当所有数字都被弹出的时候，k应该等于popV.size()
        if( k != popV.size())
            return false;
        return true;
    }
};
