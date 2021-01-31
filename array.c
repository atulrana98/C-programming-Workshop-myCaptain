#include <stdio.h>

void main()
{
  int arr[3][3],i,j,a=0,sum=0;
  
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
      	   printf("%d\t",*(*(arr + i) + j));	
  }
 printf("\n\n");
 
 			for (i = 0; i < 3; ++i) 
            {
                sum = sum + arr[i][i];
                a = a + arr[i][3 - i - 1];
            }
 
            printf("\nThe sum of the main diagonal elements is = %d\n", sum);
            printf("The sum of the off diagonal elements is   = %d\n", a);
}
