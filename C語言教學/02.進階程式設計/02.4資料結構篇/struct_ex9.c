/*
	*�ɮצW��:struct_ex9
	*�{���W��:�i���{���]�p-��Ƶ��c�g---�d��9
	*�{������:��Ƶ��c�}�C��J��ƪ��d�� 
	*
*/

#include<stdio.h>
#define max 3

	struct date{
		char name[20];
		int math;
	}student[max]={{"hello",100},{"kitty",90},{"baby",200}};
	
	int showmax(struct date arr[]);
	
int main(){
	int index;
	index=showmax(student);
	printf("�̰������H�P���Ʀp�U:\n�m�W:%s\n����:%d",(student+index)->name,(student+index)->math);
	
	system ("pause");
	return 0;
}

int showmax (struct date arr[]){  //��j�p�öǦ^���ޭ� 
	int i,m,index=0;
	m=arr->math;
	for(i=0;i<max;i++){
		if((arr+i)->math>m){
			m=(arr+i)->math;
			index=i;
		}
	}
	return index;
}
