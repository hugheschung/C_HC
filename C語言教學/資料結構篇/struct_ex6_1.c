/*
	*�ɮצW��:struct_ex6_1
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��6_1
	*�{������:���V���c�����ХΪk�d�ҡA���гs�����c����
*/

#include <stdio.h>

int main(void){
	
	struct date {
		char name[20];
		int math;
		
	}s1,*ptr;  //�ŧi�����ܼƻP�����ܼ�
	
	ptr=&s1;   //�]ptr����}�����c�ܼ�S1
	printf("name:");
	gets(ptr->name);
	printf("math score:");
	scanf("%d",&ptr->math);

	printf("name:%s\nmath_score:%d\n",ptr->name,ptr->math);
	system ("pause"); //�������ɦ����J�~����
	return 0;
}

