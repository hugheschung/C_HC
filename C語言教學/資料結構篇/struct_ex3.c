/*
	*檔案名稱:
	*程式名稱:
	*程式說明:
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
	/*printf("請輸入姓名: ");
	//gets(student.name);
	scanf("%s",&student.name);
	printf("請輸入成績:");
	scanf("%d",&student.math);*/
	
	printf("姓名:%s\n",student.name);
	printf("成績:%d\n",student.math);
	printf("------------S2---------從這邊印\n");
	printf("姓名:%s\n成績:%d\n",s2.name,s2.math);
	
	system ("pause"); //讓執行檔收到輸入才結束
	return 0;
}

