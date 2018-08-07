/*
	*檔案名稱:struct_ex9
	*程式名稱:進階程式設計-資料結構篇---範例9
	*程式說明:資料結構陣列丟入函數的範例 
	*
*/

#include<stdio.h>
#define max 3

	struct date{
		char name[20];
		int math;
	}student[max]={{"hello",100},{"kitty",90},{"baby",200}};
	
	int showmax(struct date arr[]);
	
int main(){
	int index;
	index=showmax(student);
	printf("最高分的人與分數如下:\n姓名:%s\n分數:%d",(student+index)->name,(student+index)->math);
	
	system ("pause");
	return 0;
}

int showmax (struct date arr[]){  //比大小並傳回索引值 
	int i,m,index=0;
	m=arr->math;
	for(i=0;i<max;i++){
		if((arr+i)->math>m){
			m=(arr+i)->math;
			index=i;
		}
	}
	return index;
}
