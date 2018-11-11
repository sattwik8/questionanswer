#include <stdio.h>

struct employee{
	int type;
	char* name;
	int age;
};

enum type{LEAD,ASSOCIATE,MANAGER,DEVELOPER};

int main(){
	struct employee e1={LEAD,"susheel",24};
	switch(e1.type){
	case LEAD:
		printf("Hello Lead\n");
		break;
	case ASSOCIATE:
		printf("Hello Associate\n");
		break;
	case MANAGER:
		printf("Hello Manager\n");
		break;
	case DEVELOPER:
		printf("Hello Developer\n");
		break;
	default:
		printf("Employee type not defined\n");
	}
	return 0;
}
