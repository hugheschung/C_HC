/*
	*檔案名稱:struct_ex3
	*程式名稱:進階程式設計-資料結構篇---範例3
	*程式說明:練習將結構data變數student設給變數s2
	*
*/

#include <stdio.h>

int main(void){
	
	struct data
	{
		char name[20];
		int math;
	};
	struct data student={"hello kitty",100};
	struct data s2;
	s2=student;
		
	printf("姓名:%s\n",student.name);
	printf("成績:%d\n",student.math);
	printf("------------S2---------從這邊印\n");
	printf("姓名:%s\n成績:%d\n",s2.name,s2.math);
	
	system ("pause"); //讓執行檔收到輸入才結束
	return 0;
}

