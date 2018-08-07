/*
	*檔案名稱:struct_ex6_1
	*程式名稱:進階程式設計-資料結構篇---範例6_1
	*程式說明:指向結構的指標用法範例，指標連接結構成員
*/

#include <stdio.h>

int main(void){
	
	struct date {
		char name[20];
		int math;
		
	}s1,*ptr;  //宣告成員變數與指標變數
	
	ptr=&s1;   //設ptr的位址為結構變數S1
	printf("name:");
	gets(ptr->name);
	printf("math score:");
	scanf("%d",&ptr->math);

	printf("name:%s\nmath_score:%d\n",ptr->name,ptr->math);
	system ("pause"); //讓執行檔收到輸入才結束
	return 0;
}

