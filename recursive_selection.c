#include <stdio.h>

void recursive_selection(int array[],int curr_index){
	if(curr_index>0){
		int extreme=0;
		for(int i=1;i<=curr_index;i++){
			if(array[extreme]<array[i])
				extreme=i;
		}
		int temp=array[extreme];
		array[extreme]=array[curr_index];
		array[curr_index]=temp;
		recursive_selection(array,curr_index-1);
	}
}
int main(int argc,char** argv){
	int array[]={4,5,1,7,3,8,9};
	recursive_selection(array,6);
	for(int i=0;i<7;i++)
	printf("%d ",array[i]);
	printf("\n");
	return 0;	
}
