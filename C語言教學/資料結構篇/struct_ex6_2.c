/*
	*檔案名稱:struct_ex6_2
	*程式名稱:進階程式設計-資料結構篇---範例6_2
	*程式說明:指向結構的指標範例，此範例說明如何連結結構陣列成員 
	*
*/

#include<stdio.h>
#define max 3

int main(){
	int i,m,index=0;

	struct date{
		char name[20];
		int math;
	}student[max]={{"hello",80},{"kitty",70},{"baba",100}}; 
	
	m=student->math;   //設結構初始陣列中的math給m變數，同m=(student+0)->math 
	
	for(i=0;i<=max;i++){   //比大小迴圈 
		if((student+i)->math >m){
			m=(student+i)->math;
			index=i;
		}
	}
	
	printf("%s的成績最高分\n",(student+index)->name);
	printf("分數為%d\n",(student+index)->math);
	system ("pause");
	return 0;
}

