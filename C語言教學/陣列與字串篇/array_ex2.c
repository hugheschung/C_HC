/*
	*�ɮצW��:array_ex2
	*�{���W��:�i���{���]�p-�}�C�P�r��g---�d��2 
	*�{������:�z�ѤG���}�C���Ϊk 
	*
*/

#include <stdio.h>
#define ROW 4
#define COL 3
void search(int a[][COL],int b[]);

int main(void){
	int a[ROW][COL]={	{26,5,7},
						{10,3,47},
						{6,76,8},
						{40,4,32}};
	int i,j;
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
		printf("%02d ",a[i][j]); 	
		}
		printf("\n");
	}
	
	getchar(); //�����r���A�γ~�G�������ɭn���U�ӱ����r���A���ڭ̥i�H�ݨ쵲�G
	return 0;
}

