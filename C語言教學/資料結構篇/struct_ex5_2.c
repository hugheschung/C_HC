/*
	*檔案名稱:struct_ex5_2
	*程式名稱:進階程式設計-資料結構篇---範例5_2
	*程式說明:結構陣列範例，使用gets()和fflush()指令，請跟範例5_1比較用法
	*
*/

#include <stdio.h>
#define max 3

int main(void){
	int i;
	struct date
	{
		char name[20];
		int math;
	}s1[max];
	
	for(i=0;i<max;i++){
		printf("請輸入學員%d姓名:",i+1);
		gets(s1[i].name);
		printf("請輸入學員%d分數:",i+1);
		scanf("%d",&s1[i].math);
		fflush(stdin);  //清空緩衝區資料 
	}
	
	for(i=0;i<max;i++){
		printf("學員%d的姓名:%s\n成績::%d\n",i+1,s1[i].name,s1[i].math);
	}

	system ("pause"); //讓執行檔收到輸入才結束
	return 0;
}

