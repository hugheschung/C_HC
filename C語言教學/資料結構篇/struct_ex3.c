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
		char name[20];
		int math;
	};
	struct data student={"hello kitty",100};
	struct data s2;
	s2=student;
	/*printf("�п�J�m�W: ");
	//gets(student.name);
	scanf("%s",&student.name);
	printf("�п�J���Z:");
	scanf("%d",&student.math);*/
	
	printf("�m�W:%s\n",student.name);
	printf("���Z:%d\n",student.math);
	printf("------------S2---------�q�o��L\n");
	printf("�m�W:%s\n���Z:%d\n",s2.name,s2.math);
	
	system ("pause"); //�������ɦ����J�~����
	return 0;
}

