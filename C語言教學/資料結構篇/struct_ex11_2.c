/*
	*�ɮצW��:struct_ex11_2
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��11_2
	*�{������:typedef�ϥνd�ҡA�z�Ѩϥ�typedef�C�ϥ�enum�C�|�\���A�{�����iŪ�ʼW�[�C 
	*
*/

#include<stdio.h>
struct date{
	char name[20];
	int price;
};
typedef struct date color;    //�ۭq���Acolor=struct date�����A 
void colorshow(color);

int main(){
	char key;
	color s1={"red",1000},s2={"blue",800},s3={"green",1200};
	enum list{ red=114,blue=98,green=103}shirt;
	
	do{
		printf("�п�J��A���C��(r�Bg�Bb):");
		scanf("%c",&key);
		fflush(stdin);  //�M�z��J�Ȧs 
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
	printf("�z��ܤF%s����A�A���欰$%d\n",st.name,st.price);
}
