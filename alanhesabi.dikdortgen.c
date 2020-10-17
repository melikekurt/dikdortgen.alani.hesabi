//Bu program kullanicinin girdigi uzun ve kisa kenara sahip dikdortgenin alanini hesaplar.
#include<stdio.h>
	
	int main(){
	
	int kisa , uzun,alan ;
	printf("\nlutfen kisa kenari giriniz");
	scanf("%d",&kisa);
	printf("\nLutfen uzun kenari giriniz");
	scanf("%d",&uzun);
	
	alan=uzun*kisa;
	printf("kisa kenari %d , uzun kenari %d olan dikdortgenin alani %d dir",kisa,uzun,alan);
	
	
	
	
	return 0;
}
