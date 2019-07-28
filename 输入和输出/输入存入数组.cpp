//输入一共两行，第一行是数组A,第二行是数组B,元素之间用空格分隔。
//数组A的长度，数组B的长度<100 （）
// 用c语言写的 
void main(){
int A[100];
   int B[100];
   char c;
   int i=0;
   int n=0,m=0;//n是数组A的长度 ，m是数组B的长度
   
//输入
   while((c=getchar())!='\n')
  {
     if(isdigit(c))
        {
            ungetc(c,stdin);//将c送回输入流
            scanf("%d",&A[n++]);
        }
   }
   while((c=getchar())!='\n')
  {
     if(isdigit(c))
        {
            ungetc(c,stdin);//将c送回输入流
            scanf("%d",&B[m++]);
        }
  }
  for(i=0;i<n;i++)
      {
          printf("%d ",A[i]);
      }
  for(i=0;i<m;i++)
      {
          printf("%d ",B[i]);
      }
      
}
