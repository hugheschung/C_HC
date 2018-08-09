/*
	*檔案名稱:struct_ex4_1
	*程式名稱:進階程式設計-資料結構篇---範例4_1
	*程式說明:巢狀結構範例，請跟範例4_2比較，此範例是使用預設初始值並直接列印。
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

