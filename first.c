#include<stdio.h>

void main()
{
   int matrix[3][3];// this is a 3*3 matrix=A
   printf("enter values for matrix A: \n");
   for(int a=0;a<3;a++)
   {
       for(int b=0;b<3;b++)//filling raws
       {
           printf("enter the values of raw %d coloumn %d \n",a+1,b+1);
           scanf("%d",&matrix[a][b]);
       }
       printf("\n");//moving to the next raw
   }
   printf("the matrix you entered is : \n");//showing the matrix
   for(int i=0;i<3;i++)
   {
       for(int y=0;y<3;y++)
       {
           printf(" %d ",matrix[i][y]);
       }
       printf("\n");
   }

   int matrix2[3][3];// this is a 3*3 matrix=B
   printf("enter values for matrix B: \n");
   for(int a=0;a<3;a++)
   {
       for(int b=0;b<3;b++)//filling raws
       {
           printf("enter the values of raw %d coloumn %d \n",a+1,b+1);
           scanf("%d",&matrix2[a][b]);
       }
       printf("\n");//moving to the next raw
   }
   printf("\nthe matrix A you entered is : \n");//showing the matrix A
   for(int i=0;i<3;i++)
   {
       for(int y=0;y<3;y++)
       {
           printf(" %d ",matrix[i][y]);
       }
       printf("\n");
   }
   printf("\nthe matrix B you entered is : \n");//showing the matrix B
   for(int i=0;i<3;i++)
   {
       for(int y=0;y<3;y++)
       {
           printf(" %d ",matrix2[i][y]);
       }
       printf("\n");
   }
   //adding matrixes A + B
   printf("\n\nadding of A and B matrixes are : \nA+B= \n");
    //printf("the matrix you entered is : \n");//showing the matrix
   for(int i=0;i<3;i++)
   {
       for(int y=0;y<3;y++)
       {
           printf(" %d ",matrix[i][y]+matrix2[i][y]);
       }
       printf("\n");
   }

}