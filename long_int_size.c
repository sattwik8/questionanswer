#include <stdio.h>

int main(int argc,char** argv){
	int a=111;
	long int b=11111111;
	printf("INT size=%lu",sizeof(a));
	printf("Long Int size=%lu",sizeof(b));
	return 0;
}
