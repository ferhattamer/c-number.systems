#include <stdio.h>
int A[20],n,findnumber,i,a;
int main()
{
	for(a=0;a<20;a++){
		A[a]=a;
	}
	i=0;
	findnumber=5;
	n=20;
	while(i<n){
					if(A[i]==findnumber)
					break;
		i++;
		printf("%d \n",i);
	}
}
