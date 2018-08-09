/*
	*檔案名稱:struct_ex2_1
	*程式名稱:進階程式設計-資料結構篇---範例2_1
	*程式說明:資料結構成員設初始值範例，請跟範例2_2比較。
	*
*/

#include <stdio.h>

int main(void){
	
	struct data
	{
		char name[20];
		int math;
	};
	struct data student={"hello kitty",100};  //對結構成員設初始值
	
	
	printf("姓名:%s\n",student.name);
	printf("成績:%d\n",student.math);
	system ("pause"); //讓執行檔收到輸入才結束
	return 0;
}

