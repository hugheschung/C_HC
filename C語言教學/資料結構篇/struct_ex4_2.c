/*
	*�ɮצW��:
	*�{���W��:
	*�{������:
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
	}s1;//={"hello kitty",80,{12,20}};
	printf("�Ш̧ǿ�J�U�C���\n");
	printf("�п�J�m�W:");
	gets(s1.name);
	printf("�п�J����:");
	scanf("%d",&s1.math);
	printf("�п�J�X�ͤ�:");
	scanf("%d",&s1.birthday.month);
	printf("�п�J�X�ͤ�:");
	scanf("%d",&s1.birthday.day);
	printf("�m�W�G%s\n����:%d\n�X�ͦ~���:%d��%d��\n",s1.name,s1.math,s1.birthday.month,s1.birthday.day);
	
	system ("pause"); //�������ɦ����J�~����
	return 0;
}

