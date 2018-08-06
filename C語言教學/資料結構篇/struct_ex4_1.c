/*
	*檔案名稱:
	*程式名稱:
	*程式說明:
	*
*/

#include <stdio.h>

int main(void){
	
	struct data1
	{
		int month;
		int day;
	};
	struct data 
	{
		char name[20];
		int math;
		struct data1 birthday;
	}s1={"hello kitty",80,{12,20}};
	
	printf("姓名：%s\n分數:%d\n出生年月日:%d月%d日\n",s1.name,s1.math,s1.birthday.month,s1.birthday.day);
	
	system ("pause"); //讓執行檔收到輸入才結束
	return 0;
}

