#include <stdio.h>
int l,b,h,add;
float div,ans;
int main()
{
    printf("enter the length,breadth,height of the trepizoid");
    scanf("%d %d %d",&l,&b,&h);
    add = l+h;
    div = divisionByTwo(add);
    ans= multiplication(div);
    printf("the area of the trepizoid is &f",ans);
}
divisionByTwo(int a)
{
float c;
c= a/2;
return c;
}
multiplication(float a)
{
    float c;
    c= div * h;
    return c;
}