          //!!!!!!............Big Problems..........!!!!!!!!
#include<stdio.h>
int main()
{
    int first [10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k;
    printf("\t Note:Please Match[1st Column Number = 2nd Row Number! or 1st Row Number = 2nd Column Number!]\n");
    printf("\n\n Enter Rows & Columns for First Matrix : ");scanf("%d %d",&r1,&c1);
    printf("\n Enter Rows & Columns for Second Matrix : ");scanf("%d %d",&r2,&c2);
while(c1!=r2)
{
printf("\n\n Error! Columns of First Matrix not Equal to Rows of second Matrix...! \n ");
printf(" \n Enter Rows & Columns for First Matrix :  ");scanf("%d %d",&r1,&c1);
printf("\n Enter Rows & Columns for Second Matrix : ");scanf("%d %d",&r2,&c2);
}
//Taking Input for First Matrix
 printf("\n Enter Elements for First Matrix: ");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
        {
            printf("\nFirst[%d][%d] = ",i,j);
        scanf("%d",&first[i][j]);
        }

}
//Taking Input for Second Matrix
printf("\n Enter Elements for Second Matrix: ");
for(i=0;i<r2;i++)
{

    for(j=0;j<c2;j++)
    {
        printf("\nSecond[%d][%d] = ",i,j);
        scanf("%d",&second[i][j]);
        }

}
//Printing First Matrix
printf("\n \n First Matrix! \n");
for(i=0;i<r1;i++)
{
    printf("\t");
    for(j=0;j<c1;j++)
         printf("%d",&first[i][j]); printf("\n");
}
//Printing Second Matrix
printf("\n \n Second Matrix! \n");
for(i=0;i<r2;i++)
{
    printf("\t");
    for(j=0;j<c2;j++)
         printf("%d",&second[i][j]); printf("\n");
}

}
