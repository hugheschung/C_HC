#include <stdio.h>
/*
�{�������G²����l�ƧǪk---������J���٥i�H������A���ϥΪ̿�J���~�ȥi�H���X 
*/
int k=1024; //�w�q��J�d��� 

int main(void){
	int a[k],i,j,t,n;
	printf("�п�J�Q�n�ƧǪ��ƶq(�d��0~1024):");  //�w�q��J�Ȫ��j�p 
	scanf("%d",&n);
	while (n>1024) {
		printf("��J���~!!�Э��s��J!!!\n�п�J�ȥu�श��1~1024\n");
		scanf("%d",&n);
	}
	
	for(i=0;i<=k;i++){  //�N�}�Ca[0]~a[k]�����e�k�s`,��l���e�k�s 
		a[i]=0;
		
	}
	
	printf("�п�J�n�ƧǪ��ȡA�d��q0~%d�A�i�H��J%d��\n",n,n);
	
	for(i=1;i<=n;i++){
		scanf("%d",&t);
		a[t]++;
	}
	
	
	for(i=1;i<=k;i++){
		for(j=1;j<=a[i];j++){
			printf("%d ",i);	
		}
	}
	system ("pause");
	return 0;
}

