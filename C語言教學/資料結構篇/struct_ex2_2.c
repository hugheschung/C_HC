/*
	*�ɮצW��:struct_ex2_2
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��2_2
	*�{������:��Ƶ��c�����]��l�Ƚd�ҡA�и�d��2_1����C
	*
*/

#include <stdio.h>

int main(void){
	
	struct data
	{
		char name[20];
		int math;
	}student={"hello kitty",100};   //���c�����]���
	
	
	
	printf("�m�W:%s\n",student.name);
	printf("���Z:%d\n",student.math);
	system ("pause"); //�������ɦ����J�~����
	return 0;
}

