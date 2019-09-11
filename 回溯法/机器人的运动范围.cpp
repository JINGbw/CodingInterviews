class Solution {
public:
    int get(int x){
        int sum = 0;
        while(x>0){
            sum+=x%10;
            x /= 10;
        }
        return sum;
    }
    int dfs(vector<vector<bool> > &flag ,int threshold, int rows, int cols , int c, int r){
        if(r<0 || c<0 ||r >= rows ||c >= cols){
               return 0;
        }
        int count = 0;
        if(!flag[r][c] && (get(c)+get(r) <= threshold )){
            flag[r][c] = true;
            count = 1+dfs(flag,threshold,  rows,  cols , c+1, r)+
                dfs(flag,threshold,  rows,  cols , c-1, r)+
                dfs(flag,threshold,  rows,  cols , c, r+1)+
                dfs(flag,threshold,  rows,  cols , c, r-1);
        }
        return count;
    }
    int movingCount(int threshold, int rows, int cols)
    {
        vector<vector<bool >> flag(rows,vector<bool>(cols,0));
        if(rows<1 ||cols<1 ||threshold<1)
            return 0;
        return dfs(flag,threshold,  rows,  cols ,0,0);
    }
};
