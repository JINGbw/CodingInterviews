//题目：一个矩阵中是否存在一条包含某字符串所有字符的路径。路径可以从矩阵中的任意一个格子开始，
//每一步可以在矩阵中向左，向右，向上，向下移动一个格子。如果一条路径经过了矩阵中的某一个格子，则之后不能再次进入这个格子。
//思路：回溯法，使用1.bool矩阵记录当前是否走过 2. 使用pathlength变量记录当前走到了字符串的哪个位置。
//对于每一个位置都有可能做路径起点，所以对每一个位置做递归。

class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
    //辅助数组 
        if(matrix==nullptr||rows<1||cols<1||str==nullptr)
            return false;
        bool *visited = new bool [rows*cols];
        memset(visited,0,rows*cols);
        int pathlength = 0;//记录走到字符串的第i个位置
        //数组中每个位置都可能作为第一个元素，
        for(int i = 0;i<rows; i++){
            for(int j = 0 ; j<cols;j++){
                if(haspathcore( matrix,rows,cols ,visited,i,j,str,pathlength)){
                    delete  [] visited;
                    return true;
                }
                    
            }
        }
        delete  [] visited;
        return false;
    }
    //函数，标记矩阵，输入字符串，i(当前是第i个字符),当前在矩阵中的坐标，
    //从数组第rows,cols这个位置开始找，是否有字符串第pathlenhgth(包含这个位置，及以后的子串)
    bool haspathcore(char* matrix, int rows, int cols,bool* visited, int row, int col,char* str,int &pathlength){
        //当前点没有超出边界，当前点没有走过，当前点的值等于字符串该位置的值
        if (str[pathlength]=='\0')
            return true;
        bool haspath = false; 
        //当前位置没有走过
        if(row>=0 &&col>=0&&row<rows&&col<cols&& !visited[row*cols+col] && matrix[row*cols+col]==str[pathlength]){
            visited[row*cols+col] = true;
            pathlength++;
            haspath = haspathcore(matrix,rows,cols ,visited, row+1, col,str,pathlength)
                ||haspathcore(matrix,rows,cols ,visited, row-1, col,str,pathlength) 
                ||haspathcore(matrix,rows,cols ,visited, row, col+1,str,pathlength) 
                ||haspathcore(matrix,rows,cols ,visited, row, col-1,str,pathlength);
           if(!haspath){
            pathlength--;
            visited[row*cols+col] = false;
            return false;
        } 
        }
        
           return haspath;
    }


};
