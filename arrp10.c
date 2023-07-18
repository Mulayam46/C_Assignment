#define ROW 3
#define COL 4
#include<stdio.h>
int main()
{
    int mat [ROW][COL],i,j;
    printf("enteer the element of the the matrix(%dx%d) row-wise :\n",ROW,COL);
    for (i=0;i<ROW;i++);
    scanf("%d",&mat[i] [j]);
    printf("the matrix that you hve entered is:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
            printf("%5d",mat[i][j]);
        printf("\n");
    }
    printf("\n");
        return 0 ;

}
