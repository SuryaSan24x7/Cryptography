#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
void main()
{
char plain[100],cipher[100],text[100];
int key,i,length;
int result;
printf("Enter PlainText :");
scanf("%s",&plain);
printf("\n Enter Key :");
scanf("%d",&key);
length=strlen(plain);
for(i=0;i<length;i++)
{
cipher[i]=plain[i] + key;
if (isupper(plain[i])&&(cipher[i] >'Z'))
{
    cipher[i]=cipher[i] - 26;
}
if (islower(plain[i])&&(cipher[i] > 'z'))
{
    cipher[i]=cipher[i] - 26;
}

}
printf("\nAfter Ecryption : %s",cipher);

for(i=0;i<length;i++)
{
text[i]=cipher[i]-key;
if (isupper(cipher[i])&&(text[i] < 'A'))
{
    text[i]=text[i] - 26;
}
if (islower(cipher[i])&&(text[i] < 'a'))
{
    text[i]=text[i] - 26;
}

}
printf("\nAfter Decryption : %s",text);
getch();
}