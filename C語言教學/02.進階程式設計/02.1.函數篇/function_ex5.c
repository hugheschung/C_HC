/*
	*�ɮצW��:function_ex5
	*�{���W��:�i���{���]�p-�禡�g---�d��5
	*�{������:���j��ƻ����A�w�]��n=5�A�|����5*4*3*2*1���ȡC 
	*
*/

#include <stdio.h>
int fac(int n); //�ŧi���j��ƽd�� 

int main(void){
	int n=5,c;
	c=fac(n);
	printf("%d",c);
	getchar(); //�����r���A�γ~�G�������ɭn���U�ӱ����r���A���ڭ̥i�H�ݨ쵲�G 
	return 0;
}

int fac(int n){  //���j��ƽd�� 
	if (n==0){
		return 1;
	}
	else{
		return n*fac(n-1);
	}
	
}
