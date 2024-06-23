#include <stdio.h>
typedef short int I;typedef char C;typedef void V;
#define c(a,e) case(a):e;break;
#define R return
C a[65535];I p=0;
I mr(C*c,I i) {I s=1;while(s!=0)
{if(c[i]=='[')s++;if(c[i]==']')s--;i++;}R--i;}
I ml(C*c,I i){I s=1;while(s!=0)
{if(c[i]==']')s++;if(c[i]=='[')s--;i--;}R++i;}
V r(C *c) {for(I i=0;c[i]!='\0';i++){
switch(c[i]){c('+',a[p]++)c('-',a[p]--)
c('>',p++)c('<',p--)c('.',printf("%c",a[p]))
c(',',a[p] = getchar())c('[',if(a[p]==0)i=mr(c,i+1))
c(']',if(a[p]!=0)i=ml(c,i-1))}}}
int main(int c,C**v){{C c[2048];printf("> ");
if(!fgets(c,sizeof(c),stdin)){printf("\n");}
r(c);}R 0;}
