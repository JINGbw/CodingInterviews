//思路：1. 哈希表
// 2. 将值为i的元素调整到第i个位置上进行求解，如果第i个位置上已经有值为i的数了，说明i是重复的 
//两个非法输入判断条件：1. 输入为空/长度<=0 2. 数字的范围不在0到n-1之间 
    bool duplicate(int numbers[], int length, int* duplication) {
        //数组为空/长度小于等于0 
        //数字的范围不在0到n-1的范围内
        if (numbers==nullptr||length<=0)
            return false;
       for(int i = 0;i<length;i++){
           if(numbers[i]<=0 ||numbers[i]>length-1){
               return false;
           }
       }
       for(int i = 0; i<length ;i++){
           while (numbers[i]!=i){
               //如果第i个数不等于i,就把第i个数换到i的位置去，
               //如果第i个数那个数的位置 等于那个数，就说明找到了重复的数字
               if(numbers[numbers[i]]==numbers[i]){
                    *duplication = numbers[i];
                   return true;
               }
               swap(numbers[i],numbers[numbers[i]]);     
           } 
       }
            return false;
    }
