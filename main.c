#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int age;
	printf("Enter your age.");
	scanf("%d", &age);
	
	if (age >= 18){
		printf("You are an adult.");
	}else{
		printf("you are a minor");
	}
	return 0;
}