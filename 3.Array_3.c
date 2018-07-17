#include <stdio.h>
int main(){
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter elements of 1st array: \n");

    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {

            scanf("%d",&a[i][j]);
        }

    printf("Enter elements of 2nd array: \n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            scanf("%d", &b[i][j]);
        }


    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }

    printf("Sum of two array is: \n\n");

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
            printf("%d \t",sum[i][j]);

            if(j==c-1)
            {
                printf("\n\n");
            }
        }

    return 0;
}
