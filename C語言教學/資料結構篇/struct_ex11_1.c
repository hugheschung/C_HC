/*
	*�ɮצW��:struct_ex11_1 
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��11_1 
	*�{������:typedef�ϥνd�ҡA�z�Ѩϥ�typedef�C�i�H��ex_10_5�Mex_11_2����@�U�A�ϥ�enum�C�|�\���{�����iŪ�ʦp�� 
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
	int shirt;
	color s1={"red",1000},s2={"blue",800},s3={"green",1200};
	
	do{
		printf("�п�J��A���C��(r�Bg�Bb):");
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
	printf("�z��ܤF%s����A�A���欰$%d\n",st.name,st.price);
}
