#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char s[16];
	fgets(s, 16, stdin);
	char s1[16];
	int l=strlen(s)-1;
	printf("%d", l);
	for(int i=0; i<16; i++){
		if(s[i]!=EOF)
			s1[i]=s[i];
	}
	for(;l<15; l+=2){
		s1[l]='*';
		s1[l+1]='#';
	}
	for(int i=0; i<16; i++){
		if(s1[i]=='\n')
			s1[i]='\0';
		printf("%c", s1[i]);
	}
	return 0;
}
