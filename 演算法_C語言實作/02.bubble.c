#include <stdio.h>
/*
�{�������G��w�ƧǪk 
*/
int main(void){
	int a[100],i,j,t,n;
	printf("please enter n num:"); //��J�A�n����X�ӼƦr 
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	
	//��w�ƧǪk�t��k 
	for(i=1;i<=n-1;i++){
		for(j=1;j<=n-i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	
	
	for(i=1;i<=n;i++)
		printf("%d  ",a[i]);
	return 0;
}

