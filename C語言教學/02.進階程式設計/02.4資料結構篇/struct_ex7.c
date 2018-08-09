/*
	*檔案名稱:struct_ex7
	*程式名稱:進階程式設計-資料結構篇---範例7
	*程式說明:結構資料作為引數丟入函數使用範例。 
	*
*/

#include<stdio.h>


	struct date{
		char name[20];
		int math;
	};
	
	void display(struct date);
	
int main(){
	struct date s1={"hello kitty",105};
	display(s1);
	system ("pause");
	return 0;
}

void display (struct date k){
	printf("name:%s\n",k.name);
	printf("math score\n",k.math);
}
