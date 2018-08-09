/*
	*檔案名稱:struct_ex11_1 
	*程式名稱:進階程式設計-資料結構篇---範例11_1 
	*程式說明:typedef使用範例，理解使用typedef。可以跟ex_10_5和ex_11_2比較一下，使用enum列舉功能後程式的可讀性如何 
	*
*/

#include<stdio.h>
struct date{
	char name[20];
	int price;
};
typedef struct date color;    //自訂型態color=struct date的型態 
void colorshow(color);

int main(){
	char key;
	int shirt;
	color s1={"red",1000},s2={"blue",800},s3={"green",1200};
	
	do{
		printf("請輸入衣服的顏色(r、g、b):");
		scanf("%c",&key);
		fflush(stdin);
	}while((key!=114)&&(key!=98)&&(key!=103));
	
	shirt=key;
	
	switch(shirt){
		case 114:
			colorshow(s1); 
			break;
		case 98:
			colorshow(s2);
			break;
		case 103:
			colorshow(s3);
			break;
	}

	
	system ("pause");
	return 0;
}


void colorshow(color st){
	printf("您選擇了%s的衣服，價格為$%d\n",st.name,st.price);
}
