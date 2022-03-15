#include<stdio.h>
int main()
{
    int i,j,r,c,a[5][5],count=0;
    printf("enter the elements  of a matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         if(a[i][j]==0)
         {
             count++;
         }
        }
    }
    if(count>((r*c)/2))
    {
        printf("matrix is sparse\n");
    }
    else{
       printf("the matrix is not sparse\n");
    }

return 0;
}
