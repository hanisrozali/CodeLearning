#include <stdio.h>
#include <stdbool.h>


int main(){
	

	//declare variable
	
	int input;

	//taknak tulis true pun takpe
	
	bool heightIs180cm;

	//prompt user bawah declare
	
	//printf("Is abang height 180 cm?\nPress 3 if true, 0 if false\n");

	scanf("%d", &input);
	
	heightIs180cm = input;

	//process program

	if (heightIs180cm)
	{
	
		printf("youare syemmboi!!\n");
	
	}else{
		printf("you suck at hifi.\n");
	}	


	return 0;
}
