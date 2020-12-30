#include<stdio.h>
void strreverse(char []);

int main()
{
	char str[100];
	printf("\n Enter Any String:");
	gets(str);
	printf("\n Given String: %s",str);
	strreverse(str);
	printf("\n Reverse of the given String: %s",str);
	return 0;
}

void strreverse(char str[]){
	int i,j,k;
	char t;
	for(i=0;str[i]!='\0';i++);
	for(j=0,k=i-1;j<i/2;j++,k--){
	   t=str[k];
	   str[k]=str[j];
	   str[j]=t;
	}
}
