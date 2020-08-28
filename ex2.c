#include<stdio.h>

int main(int argc, char* argv[])
{
	printf("The value of argc %d \n",argc);
        
	int i;
	for(i=0;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}

}


