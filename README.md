# NewCoder
剑指Offer 66题刷题笔记
## 数组

1. [二维数组的查找](https://github.com/JINGbw/NewCoder/blob/master/%E6%95%B0%E7%BB%84/%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84%E7%9A%84%E6%9F%A5%E6%89%BE.cpp)
- 题目：二维数组从左到右依次变大，从上到下依次变大，找到目标数字
- 法一：利用二分法找到该数所在的行，再用二分法找到这个数
- 法二：从左下角或者右上角开始找，可以根据Target与当前元素的大小关系来缩小查找区间

2. [把数组排成最小的数](https://github.com/JINGbw/NewCoder/blob/master/%E6%95%B0%E7%BB%84/%E6%8A%8A%E6%95%B0%E7%BB%84%E6%8E%92%E6%88%90%E6%9C%80%E5%B0%8F%E7%9A%84%E6%95%B0.cpp)
- 题目：把数组（int类型）里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个
- 思路：1.重新定义排序函数中调用的比较函数cmp 并排序 2. 将排好序的数组拼接起来返回
- 把数组里所有的数拼起来，打印出最小的一个 

3. [数组中重复的数字](https://github.com/JINGbw/NewCoder/blob/master/%E6%95%B0%E7%BB%84/%E6%95%B0%E7%BB%84%E4%B8%AD%E9%87%8D%E5%A4%8D%E7%9A%84%E6%95%B0%E5%AD%97.cpp)
题目：找到数组中任意一个重复的数字
思路：如果第i个数不等于i,就把第i个数换到i的位置去，如果第i个数那个数的位置 等于那个数，就说明找到了重复的数字

4. [构建乘积数组]()

5. [调整数组顺序使奇数位于偶数前面]()

6. [连续子数组的最大和]()

7. [顺时针打印矩阵]()

## c++

1. int 转 string 

to_string(x)

2. sort函数重写比较函数（从大到小排列）

static bool cmp(int x, int y){
return x>y?true:false;
}

3. 哈希表

unordered_map(int,int)res;//哈希表 
//查看哈希表中某个数字的数目：
res.count(20);
