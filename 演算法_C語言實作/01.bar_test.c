#include <stdio.h>
/*
程式說明：簡易桶子排序法---中間輸入值還可以更改條件，讓使用者輸入錯誤值可以跳出 
*/
int k=1024; //定義輸入範圍值 

int main(void){
	int a[k],i,j,t,n;
	printf("請輸入想要排序的數量(範圍0~1024):");  //定義輸入值的大小 
	scanf("%d",&n);
	while (n>1024) {
		printf("輸入錯誤!!請重新輸入!!!\n請輸入值只能介於1~1024\n");
		scanf("%d",&n);
	}
	
	for(i=0;i<=k;i++){  //將陣列a[0]~a[k]的內容歸零`,桶子內容歸零 
		a[i]=0;
		
	}
	
	printf("請輸入要排序的值，範圍從0~%d，可以輸入%d次\n",n,n);
	
	for(i=1;i<=n;i++){
		scanf("%d",&t);
		a[t]++;
	}
	
	
	for(i=1;i<=k;i++){
		for(j=1;j<=a[i];j++){
			printf("%d ",i);	
		}
	}
	system ("pause");
	return 0;
}

