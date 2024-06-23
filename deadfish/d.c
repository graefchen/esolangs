#include <stdio.h>
#define o(...) printf(__VA_ARGS__)
#define e(c) else if(c)
typedef int I; typedef char C;typedef void V;
unsigned int x;
V r(C*c){;for(;*c;*c++){if(x==256||x==-1)x=0;if(*c=='i')++x;
e(*c=='d')--x;e(*c=='o')o("%d\n",x);e(*c=='s')x*=x;}}
I main(){x=0;while(1){C c[1024];o(">> ");
if(!fgets(c,sizeof(c),stdin)){o("\n");}r(c);}return 0;}
