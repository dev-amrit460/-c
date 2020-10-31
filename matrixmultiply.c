#include<stdio.h>
int main()
{int a[3][3],b[3][3],i,j,c[3][3],x,y;
printf("enter numbers for 1st matrix:\n");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		scanf("%d",&a[i][j]);
	};
};
printf("enter numbers for 2nd matrix:\n");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		scanf("%d",&b[i][j]);
	};
};
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		c[i][j]=0;
		for(x=0;x<3;x++){
			y=(a[i][x])*(b[x][j]);
			c[i][j]=c[i][j]+y;
		};

	};
};
printf("multiplication of 1st matrix with 2nd matrix is:\n");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d ",c[i][j]);
	};
	printf("\n");
};
return 0;
}