/*
	*�ɮצW��:struct_ex3
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��3
	*�{������:�m�߱N���cdata�ܼ�student�]���ܼ�s2
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
		
	printf("�m�W:%s\n",student.name);
	printf("���Z:%d\n",student.math);
	printf("------------S2---------�q�o��L\n");
	printf("�m�W:%s\n���Z:%d\n",s2.name,s2.math);
	
	system ("pause"); //�������ɦ����J�~����
	return 0;
}

