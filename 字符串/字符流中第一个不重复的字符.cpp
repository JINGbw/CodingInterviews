//题目：找出字符流中第一个只出现一次的字符
//思路：使用1. string记录字符流 2. 使用哈希表记录字符流中字符出现的次数，取出来的时候查找一下
class Solution
{
public:
  //Insert one char from stringstream
    void Insert(char ch)
    {
         s+=ch;
        count[ch]++;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {for(int i = 0 ;i<s.size();i++){
        if(count[s[i]]==1)
            return s[i];
    }
     return '#';
    }
string s;
int count[256] = {0};
};
