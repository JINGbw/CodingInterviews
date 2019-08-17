//思路：1.从左到右 2. 从上到下 3.从右到左 4.从下到上
//注意循环截止条件 （3.4.的时候考虑）(只有一行或者一列的情况)
class Solution {
public:
//     vector<int> printMatrix(vector<vector<int> > matrix) {
//            //从左到右，从上到下，
//         int rows = matrix.size()-1;
//         int cols = matrix[0].size()-1;
//         int left = 0,right = cols ,bottom = rows,top = 0;
//         vector<int>res;
//         //这个循环每循环一次，打印一圈
//         while (left<=right&&top<=bottom){
//             for(int i = left; i<= right ; i++){
//                 res.push_back(matrix[top][i]);
//             }
//             //这里如果只有一行就不会往下走的
//             for(int i = top+1; i<= bottom ;i++){
//                 res.push_back(matrix[i][right]);
//             }
//             //但是往左走就需要判断竖直方向了 
//             if (top<bottom){
//                 for(int i = right-1 ; i>=left  ;i--){
//                     res.push_back(matrix[bottom][i]);
//                 }
//             }
//             if (right>left){
//                 for(int i = bottom-1;i>top;i-- ){
//                     res.push_back(matrix[i][left]);
//                 } 
//             }
//             left++,right--,top++,bottom--;
//         }
//         return res;
//     }
};

  vector<int> printMatrix(vector<vector<int> > matrix) {
          //从左到右，从上到下，
       int rows = matrix.size()-1;
       int cols = matrix[0].size()-1;
       int left = 0,right = cols ,bottom = rows,top = 0;
       vector<int>res;
       //这个循环每循环一次，打印一圈
       while (left<=right&&top<=bottom){
 
           for(int i = left; i<= right ; i++){
          
               res.push_back(matrix[top][i]);
           }
           //这里如果只有一行就不会往下走的
            if(top==bottom)
               break;
           for(int i = top+1; i<= bottom ;i++){
             
               res.push_back(matrix[i][right]);
           }
           //但是往左走就需要判断竖直方向了
            if(right == left)
                break;
               for(int i = right-1 ; i>=left  ;i--){
                  
                   res.push_back(matrix[bottom][i]);
               }
            if( bottom-1==top)
                break;
               for(int i = bottom-1;i>top;i-- ){
                
                   res.push_back(matrix[i][left]);
               }
           left++,right--,top++,bottom--;
       }
       for(int i = 0;i<res.size();i++){
       }
       return res;
}

