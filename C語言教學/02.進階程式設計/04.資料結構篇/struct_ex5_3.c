/*
	*�ɮצW��:struct_ex5_3
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��5_3
	*�{������:���c�}�C�d�ҡA�ϥ�strcpy()�]�r�굹���c���������r��C
	*
*/

#include <stdio.h>
#include <string.h>

int main(void){

	struct date
	{
		int math;
		char test[20];
	}a[10];
	a[1].math=100;
	printf("%d\n",a[1].math);
	printf("-----strcpy�}�l-----\n");
	strcpy(a[1].test,"hello"); //�۷��Na[1].test�]�r�� 
	printf("strcpy�᪺%s\n",a[1].test);
	
	system ("pause"); //�������ɦ����J�~����
	return 0;
}

