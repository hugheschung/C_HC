/*
	*�ɮצW��:function_ex4 
	*�{���W��:�i���{���]�p-�禡�g---�d��4 
	*�{������: �z�ѥ����ܼơB�R�A�ܼơB�ϰ��ܼ� 
	* 
*/ 


#include <stdio.h>
void test();  //�ŧi �R�A�ܼƽd�Ҩ禡  
void test2(); //�ŧi �ϰ��ܼƽd�Ҩ禡 

int a=50; //�ŧi��ƫ��A�������ܼ� 

int main(void){
	printf("(1)main���������ܼ�a=%d\n",a);
	test();
	test();
	test();
	test2();
	test2();
	test2();
	printf("(2)main���������ܼ�a=%d\n",a);
	test();
	test();
	test2();
	test2();
	
	getchar(); //�����r���A�γ~�G�������ɭn���U�ӱ����r���A���ڭ̥i�H�ݨ쵲�G 
	return 0;
}

void test(){  //�R�A�ܼƽd�Ҩ禡 
	static int a = 100;
	printf("�R�A�ܼƤ���a=%d\n",a);
	a+=200;
}

void test2(){ //�ϰ��ܼƽd�Ҩ禡 
	int a=9;
	printf("�ϰ��ܼƤ���a=%d\n",a);
	a+=100;   //�`�N����P�R�A�ܼƪ��ܤ� 
}
