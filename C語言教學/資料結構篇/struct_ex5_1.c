/*
	*�ɮצW��:
	*�{���W��:
	*�{������:
	*
*/

#include <stdio.h>
#define max 3

int main(void){
	int i;
	struct date
	{
		char name[20];
		int math;
	}s1[max];
	
	for(i=0;i<max;i++){
		printf("�п�J�ǭ�%d�m�W:",i+1);
		scanf("%s",&s1[i].name);
		printf("�п�J�ǭ�%d����:",i+1);
		scanf("%d",&s1[i].math);
	}
	
	for(i=0;i<max;i++){
		printf("�ǭ�%d���m�W:%s\n���Z::%d\n",i+1,s1[i].name,s1[i].math);
	}

	system ("pause"); //�������ɦ����J�~����
	return 0;
}

