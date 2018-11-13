#include <stdio.h>

void recursive_selection(int array[],int size,int curr_index){
	if(curr_index<size){
		int extreme=curr_index;
		for(int i=curr_index+1;i<size;i++){
			if(array[extreme]>array[i])
				extreme=i;
		}
		if(extreme!=curr_index){
		int temp=array[extreme];
		array[extreme]=array[curr_index];
		array[curr_index]=temp;
		}
		recursive_selection(array,size,curr_index+1);
	}
}
int main(int argc,char** argv){
	int array[]={4,5,1,7,3,8,9};
	recursive_selection(array,7,0);
	for(int i=0;i<7;i++)
	printf("%d ",array[i]);
	printf("\n");
	return 0;	
}
