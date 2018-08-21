#include <stdio.h>
/*
程式說明：氣泡排序法 
*/
int main(void){
	int a[100],i,j,t,n;
	printf("please enter n num:"); //輸入你要比較幾個數字 
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	
	//氣泡排序法演算法 
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

