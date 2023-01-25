#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
void main()
{
	printf("*************Column Transpose************");
	char a[20],ci[20],d[20];
	int i,j,k,l;
	printf("\n Enter Plaintext :");
	gets(a);
	l=strlen(a);
	for(i=0,j=0;i<l;i++){
		if(i%2 == 0)
		{
		ci[j]=a[i];
		j++;
		}

	}
		for(i=0;i<l;i++){
		if(i%2 == 1)
		{
		ci[j]=a[i];
		j++;
		}

	}
	ci[j]=
	printf("\n Encrypted Text :%s",ci);
	if(l%2==0){
	k=l/2;}
	else{
	k=l/2+1;}
		for(i=0,j=0;i<k;i++)
		{
		d[j]=ci[i];
		j=j+2;
		}
		for(i=k,j=1;i<l;i++)
		{
		d[j]=ci[i];
		j=j+2;
		}
	printf("\n Decrypted Text :%s",d);
	
	getch();
}