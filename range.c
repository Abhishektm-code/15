#include <stdio.h>
void find_the_range(int a);
void find_the_sub_range(int b);
int main()
{
    int a,b;
    printf("Enter the range to print\n");
    scanf("%d",&a);
    find_the_range(a);
    printf("\n");
    printf("Enter the range to print\n");
    scanf("%d",&b);
    find_the_sub_range(b);
    return 0;
}
void find_the_range(int a)
{
        int i=0;
        for(i=1;i<=a;i++)
            printf("%d\n",i);
}
void find_the_sub_range(int b)
{
        int j=0;
        for(j=1;j<=b;j++)
            printf("%d\n",j);
}
