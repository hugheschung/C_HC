/*
	*�ɮצW��:struct_ex4_1
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��4_1
	*�{������:�_�����c�d�ҡA�и�d��4_2����A���d�ҬO�ϥιw�]��l�Ȩê����C�L�C
	*
*/

#include <stdio.h>

int main(void){
	
	struct data1
	{
		int month;
		int day;
	};
	struct data 
	{
		char name[20];
		int math;
		struct data1 birthday;
	}s1={"hello kitty",80,{12,20}};
	
	printf("�m�W�G%s\n����:%d\n�X�ͦ~���:%d��%d��\n",s1.name,s1.math,s1.birthday.month,s1.birthday.day);
	
	system ("pause"); //�������ɦ����J�~����
	return 0;
}

