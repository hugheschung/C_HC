/*
	*�ɮצW��:struct_ex10_5
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��10_5
	*�{������:enum�ϥνd�ҡA���ϥΪ̿�ܦ�A�C��C 
	*
*/

#include<stdio.h>

int main(){
	enum date{	red=114, blue=98,	green=103}shirt,hat;
	int key;
	
	do{
		printf("�п�J��A���C��(r�Bg�Bb):");
		scanf("%c",&key);
		fflush(stdin);
	}while((key!=red)&&(key!=blue)&&(key!=green));
	
	shirt=key;
	
	switch(shirt){
		case red:
			printf("�z��ܤF����\n");
			break;
		case blue:
			printf("�z��ܤF�Ŧ�\n");
			break;
		case green:
			printf("�z��ܤF���\n");
			break;
	}

	
	system ("pause");
	return 0;
}

