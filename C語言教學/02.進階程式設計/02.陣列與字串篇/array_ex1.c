/*
	*�ɮצW��:array_ex1
	*�{���W��:�i���{���]�p-�}�C�P�r��g---�d��1
	*�{������:�z�Ѥ@���}�C���Ϊk 
	*
*/

#include <stdio.h>
#define SIZE 4

void show(int arr[]);

int main(void){
	int A[SIZE],i;
	printf("�п�J�|�Ӧr�ǤJA[]�}�C:\n");
	for(i=0;i<SIZE;i++){
		scanf("%d",&A[i]);
	}

	printf("�}�C�����e�G");
	show(A);	

	getchar(); //�����r���A�γ~�G�������ɭn���U�ӱ����r���A���ڭ̥i�H�ݨ쵲�G
	return 0;
}

void show(int arr[]){
	int i;
	for(i=0;i<SIZE;i++){
		printf("%02d ",arr[i]);
	}
}


