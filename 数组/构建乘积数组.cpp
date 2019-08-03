//题目：给定数组A[0,1,...n-1]，要求构建B[0,1,...n-1],其中B的元素B[i] = A[0]A[1]...A[i-1]A[i+1]...A[n-1]。
//要求不能使用除法
//思路：循环两遍数组
//1. 第一趟从前往后 计算 i= 1,2,...n-1 令B[i]=B[i-1]A[i-1]
//2. 第二趟从后往前 计算 i= n-2,n-1...1 令B[i] = B[i]A[i+1]...A[n-1]
class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        vector<int>B(A.size(),1);
        for(int i = 1; i<A.size(); i++){
            B[i] = B[i-1]*A[i-1];
        }
        int tmp=1;
        for(int i = A.size()-2;i>=0;i--){
            tmp*=A[i+1];
            B[i] *= tmp;
        }
        return B;
    }
};
