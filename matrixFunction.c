#include<stdio.h>

       void add(int arr1[][2], int arr2[][2]);
	   void subtract(int arr1[][2], int arr2[][2]);
	   void multiply(int arr1[][2], int arr2[][2]);

int main()
              {
                 int arr1[2][2], arr2[2][2];
	    /* take input in both the array */
        printf("INPUT 1st matrix:\n");
	    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");}
		
		
        printf("INPUT 2nd matrix:\n");
        for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");}

	   add(arr1,arr2);
	   subtract(arr1,arr2);
	   multiply(arr1,arr2);

 }

void add(int arr1[][2], int arr2[][2])
{
    int sum[2][2],i,j;
    for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
        {
           sum[i][j]=arr1[i][j]+arr2[i][j];
        }
        }

/* Print output matrix*/
printf("Addition of 1st matrix with 2nd matrix is:\n");
for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++){
            printf("%d",sum[i][j]);
        }
        printf("\n");
        }
}


void subtract(int arr1[][2], int arr2[][2])
{
    int sub[2][2],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
        {
           sub[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
        

/* Print output matrix*/
printf("subtraction of 1st matrix with 2nd matrix is:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
            printf("%d",sub[i][j]);
        }
        printf("\n");
}
        
}

void multiply(int arr1[][2], int arr2[][2])
{  
    int mult[2][2],i,j,k;
    for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
            mult[i][j]=0;
			for(k=0; k<2; k++)
			{
				mult[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
    /* Print output matrix*/
printf("multiplication of 1st matrix with 2nd matrix is:\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("%d ",mult[i][j]);
	}
	printf("\n");
}
}
