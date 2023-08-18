#include <stdio.h>
int i,j,toplam;
int main()
{
	for(i=0,j=10;i<10,j>0;i++,j--){
		toplam=i+j;
		printf("%d \n",toplam);
	}
	printf("%d ",toplam);
	return 0;
}
