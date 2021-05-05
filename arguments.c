#include <stdio.h>

/*
	Passing Arguments to Functions
*/
void greeting(char Name[]){
	printf("Hello %s", Name);
}

void isNumEven(int i){
	if(i%2==0 && i!=0){
		printf("The Number is Even.");
	} else {
		printf("The Number is Odd");
	}
}


int main(int argc, char *argv[]) {
	char firstName[10];
	fgets(firstName, 10, stdin);
	greeting(firstName);
	
	int i = getchar();
	isNumEven(i);
	switch(i){
		case 0:
			printf("INVALID");
			break;
		case 1:
			printf("ODD");
			break;
	}
	return 0;
}