/*
	*�ɮצW��:struct_ex6_2
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��6_2
	*�{������:���V���c�����нd�ҡA���d�һ����p��s�����c�}�C���� 
	*
*/

#include<stdio.h>
#define max 3

int main(){
	int i,m,index=0;

	struct date{
		char name[20];
		int math;
	}student[max]={{"hello",80},{"kitty",70},{"baba",100}}; 
	
	m=student->math;   //�]���c��l�}�C����math��m�ܼơA�Pm=(student+0)->math 
	
	for(i=0;i<=max;i++){   //��j�p�j�� 
		if((student+i)->math >m){
			m=(student+i)->math;
			index=i;
		}
	}
	
	printf("%s�����Z�̰���\n",(student+index)->name);
	printf("���Ƭ�%d\n",(student+index)->math);
	system ("pause");
	return 0;
}

