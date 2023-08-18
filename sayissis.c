#include <stdio.h>
int dizi[8]={128,64,32,16,8,4,2,0};
int sayi1bit[8],sayi2bit[8];
int sayi1,sayi2,i,j,k,toplam,baslabir,basla2;
int main(){
	sayi1=5;
	sayi2=7;
	for(i=0;i<8;i++){
		if(dizi[i]>=sayi1){
			sayi1bit[i]=0;
		}else{
			sayi1bit[i]=1;
			sayi1=sayi1-dizi[i];
			 baslabir=8-i;
		}
		printf("%d",baslabir);
	}
		for(j=0;j<8;j++){
			if(dizi[j]>=sayi2){
				sayi2bit[j]=0;
			}else{
				sayi2bit[j]=1;
				sayi2=sayi2-dizi[j];
			 basla2=8-j;
}
	}
	
		for(j=0;j<8;j++){
		printf("%d",sayi1bit[j]);
	}
	printf("\n");
for(j=0;j<8;j++){
		printf("%d",sayi2bit[j]);
	}
		printf("\n");
		printf("%d",baslabir);
	if(baslabir>=basla2){
		toplam=baslabir;
	}
	printf("%d",toplam);
	for(k=0;k<8;k++){
		if(sayi1bit[k]!=sayi2bit[k]){
		toplam=toplam-1;
		}
	}
	printf("\n");
printf("%d  adet ayni bit var",toplam);
	
}
