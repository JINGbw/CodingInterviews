//思路：1.重新定义排序函数中调用的比较函数cmp 并排序 2. 将排好序的数组拼接起来返回
 string PrintMinNumber(vector<int> numbers) {
        //如果最低位是0 说明这个数就是0 
        sort(numbers.begin(),numbers.end(),lambda);
        string s = "";
        for(int i = 0;i<numbers.size();i++){
            s+= to_string(numbers[i]);
       
    }
        return s;
    }
    //如果x+y小与y+x 就返回true 
    static bool lambda(int x ,int y){
        if (to_string(x)+to_string(y)<to_string(y)+to_string(x))
            return true;
        else 
            return false;
    }
