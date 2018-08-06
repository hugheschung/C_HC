/*
	*檔案名稱:
	*程式名稱:
	*程式說明:
	*
*/

#include <stdio.h>

int main(void){
	
	struct date {
		char name[20];
		int math;
		
	}s1,*ptr;
	
	ptr=&s1;
	printf("name:");
	gets(ptr->name);
	printf("math score:");
	scanf("%d",&ptr->math);

	printf("name:%s\nmath_score:%d\n",ptr->name,ptr->math);
	system ("pause"); //讓執行檔收到輸入才結束
	return 0;
}

