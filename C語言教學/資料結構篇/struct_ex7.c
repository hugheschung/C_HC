/*
	*�ɮצW��:struct_ex7
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��7
	*�{������:���c��Ƨ@���޼ƥ�J��ƨϥνd�ҡC 
	*
*/

#include<stdio.h>


	struct date{
		char name[20];
		int math;
	};
	
	void display(struct date);
	
int main(){
	struct date s1={"hello kitty",105};
	display(s1);
	system ("pause");
	return 0;
}

void display (struct date k){
	printf("name:%s\n",k.name);
	printf("math score\n",k.math);
}
