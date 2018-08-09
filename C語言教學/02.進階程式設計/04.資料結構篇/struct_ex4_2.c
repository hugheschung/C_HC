/*
	*檔案名稱:struct_ex4_2
	*程式名稱:進階程式設計-資料結構篇---範例4_2
	*程式說明:巢狀結構範例，請跟範例4_1比較，此範例是使用手動輸入再呈現資訊。
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
	}s1;//={"hello kitty",80,{12,20}};
	printf("請依序輸入下列資料\n");
	printf("請輸入姓名:");
	gets(s1.name);
	printf("請輸入分數:");
	scanf("%d",&s1.math);
	printf("請輸入出生月:");
	scanf("%d",&s1.birthday.month);
	printf("請輸入出生日:");
	scanf("%d",&s1.birthday.day);
	printf("姓名：%s\n分數:%d\n出生年月日:%d月%d日\n",s1.name,s1.math,s1.birthday.month,s1.birthday.day);
	
	system ("pause"); //讓執行檔收到輸入才結束
	return 0;
}

