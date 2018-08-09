/*
	*檔案名稱:struct_ex1
	*程式名稱:進階程式設計-資料結構篇---範例1 
	*程式說明:理解使用C語言資料結構宣告方法，無設初值 
	*
*/

#include <stdio.h>

int main(void){
	
	struct data    //宣告結構data 
	{
		char name[10];
		int math;
	}student;
	
	printf("請輸入姓名: ");
	//gets(student.name);
	scanf("%s",&student.name);
	printf("請輸入成績:");
	scanf("%d",&student.math);
	
	printf("姓名:%s\n",student.name);
	printf("成績:%d\n",student.math);
	system ("pause"); //讓執行檔收到輸入才結束
	return 0;
}

