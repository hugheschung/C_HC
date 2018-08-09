/*
	*檔案名稱:struct_ex8
	*程式名稱:進階程式設計-資料結構篇---範例8
	*程式說明:結構資料傳送位址到函數的範例 
	*
*/

#include<stdio.h>


	struct date{
		char name[20];
		int math;
	};
	
	void sweap(struct date *,struct date *);
	
int main(){
	struct date ptr1={"hello kitty",105};
	struct date ptr2={"jacky",60};
	printf("交換前ptr1的姓名%s\n成績:%d\n",ptr1.name,ptr1.math);
	printf("交換前ptr2的姓名%s\n成績:%d\n",ptr2.name,ptr2.math);
	
	printf("-----------交換分割線------------\n");
	sweap(&ptr1,&ptr2);
	printf("交換後ptr1的姓名%s\n成績:%d\n",ptr1.name,ptr1.math);
	printf("交換後ptr2的姓名%s\n成績:%d\n",ptr2.name,ptr2.math);
	system ("pause");
	return 0;
}

void sweap (struct date *ptr1,struct date *ptr2){
	struct date temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
