/*
	*�ɮצW��:struct_ex10_4
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��10_4
	*�{������:enum�ϥνd�ҡA�C�|������l�ȻP�]�Ȫ��t������C 
	*
*/

#include<stdio.h>

int main(){
	enum date{	white,black,yellow,red=114, blue=98,	green=103}shirt,hat;
	printf("�զ�shirt����l��:%d\n",shirt=white);
	printf("�¦�shirt����l��:%d\n",shirt=black);
	printf("����shirt����l��:%d\n",shirt=yellow);
	shirt=114;
	printf("��shirt=114�A�æL�X��l��:%d\n",shirt);
	shirt=blue;
	printf("��shirt=blue�A�æL�X��l��:%d\n",shirt);
	

	
	system ("pause");
	return 0;
}

