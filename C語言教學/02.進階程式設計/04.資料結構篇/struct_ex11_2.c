/*
	*檔案名稱:struct_ex11_2
	*程式名稱:進階程式設計-資料結構篇---範例11_2
	*程式說明:typedef使用範例，理解使用typedef。使用enum列舉功能後，程式的可讀性增加。 
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
	color s1={"red",1000},s2={"blue",800},s3={"green",1200};
	enum list{ red=114,blue=98,green=103}shirt;
	
	do{
		printf("請輸入衣服的顏色(r、g、b):");
		scanf("%c",&key);
		fflush(stdin);  //清理輸入暫存 
	}while((key!=red)&&(key!=blue)&&(key!=green));
	
	shirt=key;
	
	switch(shirt){
		case red:
			colorshow(s1); 
			break;
		case blue:
			colorshow(s2);
			break;
		case green:
			colorshow(s3);
			break;
	}

	
	system ("pause");
	return 0;
}


void colorshow(color st){
	printf("您選擇了%s的衣服，價格為$%d\n",st.name,st.price);
}
