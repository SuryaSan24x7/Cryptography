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
		if(i%3 == 0)
		{
		ci[j]=a[i];
		j++;
		}

	    }
		for(i=0;i<l;i++){
		if(i%3 == 1)
		{
		ci[j]=a[i];
		j++;
		}
		}
		for(i=0;i<l;i++){
		if(i%3 == 2)
		{
		ci[j]=a[i];
		j++;
		}

	}
	ci[l]='\0';
	printf("\n Encrypted Text :%s",ci);
	if(l%3==0){
	k=l/3;}
	else if(l%3==1){
	k=l/3 + 1;}
	else{
	k=l/3 + 2;
	}
	
		for(i=0,j=0;i<k;i++)
		{
		d[j]=ci[i];
		j=j+3;
		}
		for(i=k,j=1;i<l,j<l;i++)
		{
		d[j]=ci[i];
		j=j+3;
		}
		for(i = 2*k,j=2;i<l,j<l;i++)
		{
		d[j]=ci[i];
		j=j+3;
		}
		d[l]='\0';
	printf("\n Decrypted Text :%s",d);
	
	getch();
}