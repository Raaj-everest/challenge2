#include <stdio.h>
#include <math.h>

int main()
{
    int l,b,h,add;
    printf("enter the length,breadth,height of the trepizoid");
    scanf("%d %d %d",&l,&b,&h);
    add=addittion(l,b);
    printf("the addition value is %d",add);
}
int addittion(int a,int b){
    int c;
    c=a+b;
    return c;
}