







#include <stdio.h> 

void main()
{



FILE *fp=0;

int x,y;

if(fp)
{
fp = fopen("in.txt","rw");
printf("success\n");
}
else
{
printf("fail\n");
}

} 



