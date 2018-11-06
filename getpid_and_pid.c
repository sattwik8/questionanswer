#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
	pid_t pid;
	pid=fork();
	if(pid==-1){
	printf("Error occur during fork");
	exit(1);
	}
	else if(pid==0){
	printf("Hello I'm child and my pid= %u\n",getpid());
	}
	else{
	sleep(1); //sleep because child got chance otherwise parent die first then child become zombie
	printf("Hello I'm parent and my pid= %u\n",getpid());
	}
	printf("This print two because its executed by both parent and child\n");
	return 0;
}
