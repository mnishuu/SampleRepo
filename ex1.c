#include<stdio.h>
#include<stdlib.h>

int main(){
	char* str;

        str= malloc(15);
	strcpy(str,"How tjw hell");
	printf("%s,  %u \n",str,str);

	free(str);
}

