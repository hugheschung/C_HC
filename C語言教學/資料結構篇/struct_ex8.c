/*
	*�ɮצW��:struct_ex8
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��8
	*�{������:���c��ƶǰe��}���ƪ��d�� 
	*
*/

#include<stdio.h>


	struct date{
		char name[20];
		int math;
	};
	
	void sweap(struct date *,struct date *);
	
int main(){
	struct date ptr1={"hello kitty",105};
	struct date ptr2={"jacky",60};
	printf("�洫�eptr1���m�W%s\n���Z:%d\n",ptr1.name,ptr1.math);
	printf("�洫�eptr2���m�W%s\n���Z:%d\n",ptr2.name,ptr2.math);
	
	printf("-----------�洫���νu------------\n");
	sweap(&ptr1,&ptr2);
	printf("�洫��ptr1���m�W%s\n���Z:%d\n",ptr1.name,ptr1.math);
	printf("�洫��ptr2���m�W%s\n���Z:%d\n",ptr2.name,ptr2.math);
	system ("pause");
	return 0;
}

void sweap (struct date *ptr1,struct date *ptr2){
	struct date temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
