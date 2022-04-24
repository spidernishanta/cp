#include<stdio.h>

int main(){
	int h, i;
	scanf("%d%d", &h, &i);
	if(h>i)
		printf(">");
	else if(h<i)
		printf("<");
	else
		printf("=");
}
