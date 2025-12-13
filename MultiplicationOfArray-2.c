#include<stdio.h>
int main()
{
    int first[10][10],second[10][20],result[10][10],r1,r2,c1,c2,i,j,k;
    printf("Enter Rows&Columns for 1st matrix: ");
    scanf("%d %d",&r1,c1);
    printf("Enter Rows&Columns for 2nd matrix: ");
    scanf("%d %d",&r2,c2);
    while (c1!=r2){printf("Error!!!Column of 1st matrix not equal to row of 2nd\n ")
        printf("Enter Rows&Columns for 1st matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter Rows&Columns for 2nd matrix: ");
    scanf("%d %d",&r2,&c2);
    }
    //Taking Input for 1st matrix:-
    for(i=0;i<r1;i++){for(j=0;j<c1;j++)
    scanf("%d",&first[i][j]);
    //Taking Input for 2nd matrix:-
    for(i=0;i<r2;i++){for(j=0;j<c2;j++)
    scanf("%d",&second[i][j]);
    }
    //printing 1st matrix
    printf("\n\n 1st Matrix \n");for(i=0;i<r1;i++){printf("\t");for(j=0;j,c1;j++)printf("%d",first[i][j]);}
};
