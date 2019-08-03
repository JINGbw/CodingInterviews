//法一：利用二分法找到该数所在的行，再用二分法找到这个数
//法二：从左下角或者右上角开始找，可以根据Target与当前元素的大小关系来缩小查找区间

    bool Find(int target, vector<vector<int> > array) {
        int rows = array.size();
        int cols = array[0].size();
        if (rows==0||cols==0)
            return false;
        int x = 0,y = cols-1;
        while ( x< rows && y>=0){
            if(array[x][y]==target){
                return true;
            }
            else if (array[x][y]>target){
                y--;
            }
            else 
                x++;
        }
        return false;
    }
