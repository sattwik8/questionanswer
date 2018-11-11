#include <stdio.h>
#include <stdlib.h>

void fibonacci(int nterm){
	int a=0,b=1;
	int next;
	if(nterm<=0)
		return;
	else if(nterm==1){
		printf("%d ",a);
		return;
	}
	else if(nterm==2){
		printf("%d %d ",a,b);
		return;
	}
	else{
		printf("%d %d ",a,b);
		for(int i=1;i<=nterm-2;i++){
			next=a+b;
			printf("%d ",next);
			a=b;
			b=next;
		}
	}
}
int main(int argc,char** argv){
	if(argc!=2){
		printf("please provide number of term of fibonacci\n");
		return 1;
	}
	int nterm=atoi(argv[1]);
	fibonacci(nterm);
	return 0;
}
