#include<stdio.h>

int main(){
	
	float boy,kilo,indeks;
	
	printf("boyunuzu giriniz:");
	scanf("%f",&boy);
	printf("kilonuzu giriniz:");
	scanf("%f",&kilo);
	
	indeks=kilo/boy*boy;
	
	
	printf("vucut kitle indeksiniz: %f",indeks);
	
	
	
	return 0;
}
