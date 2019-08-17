class Solution {
public:
    void push(int value) {
        s1.push(value);
        if(s2.empty()){
            s2.push(value);
        }else{
            s2.push(min(s2.top(),value));
        }
    }
    void pop() {
        s1.pop();
        s2.pop();
    }
    int top() {
        return s1.top();
    }
    int min() {
        return s2.top();
    }
    int min(int a ,int b ){
        return (a>b? b:a);
    }
private:
     //用两个栈，有一个函数的top一定是最小值
    //  用一个栈存放 当前情况下，栈中元素的最小值
    stack<int> s1;
    stack<int> s2;
     
};
