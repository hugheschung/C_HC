/*
	*�ɮצW��:
	*�{���W��:
	*�{������:
	*
*/

#include <stdio.h>

int main(void){
	
	struct data
	{
		char name[10];
		int math;
	}student;
	
	printf("�п�J�m�W: ");
	//gets(student.name);
	scanf("%s",&student.name);
	printf("�п�J���Z:");
	scanf("%d",&student.math);
	
	printf("�m�W:%s\n",student.name);
	printf("���Z:%d\n",student.math);
	system ("pause"); //�������ɦ����J�~����
	return 0;
}

