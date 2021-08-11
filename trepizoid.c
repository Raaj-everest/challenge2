#include <stdio.h>
int main()
{
    int l,b,h,div,add;
    printf("enter the length,breadth,height of the trepizoid");
    scanf("%d %d %d",&l,&b,&h);
    add = l+h;
    div = divisionByTwo(add);
}
divisionByTwo(int a)
{
float c;
c= a/2;
return c;
}