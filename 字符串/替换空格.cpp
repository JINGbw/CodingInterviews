//题目：请实现一个函数，将一个字符串中的每个空格替换成“%20”
//思路：1. 遍历字符串，统计字符串的空格个数和非空格个数，得到替换后的长度
//      2. 从后往前替换，如果是空格就换为“%20”
//复杂度：O(N)
class Solution {
public:
	void replaceSpace(char *str,int length) {
            if(str==nullptr||length<=0)
                return;
        int oldnumber = 0;
        int blank=0;
        int i =0; 
         while(str[i]!='\0')
            {
            oldnumber++;
            if(str[i]==' ')
                {
                blank++;
            }
            i++;
        } 
        int newlength = oldnumber+blank*2;
        int oldlength=oldnumber;
        if( newlength>length)
            return;
 
       while(oldlength>=0&&oldlength<newlength ){
            if(str[oldlength]==' '){
                str[newlength--] ='0';
                str[newlength--] ='2';
                str[newlength--] ='%';
            }
            else{
                 str[newlength--] = str[oldlength];
            }
           oldlength--;
        } 
        return; 
	}
};
