#include<stdio.h>
int main(){
	int i;
	char str[100];
	printf("Enter a string (with numbers): ");
    	scanf("%[^0-9]",str);
		
		printf("String(without numeric characterstics) : %s\n", str);
	return 0;	
}
