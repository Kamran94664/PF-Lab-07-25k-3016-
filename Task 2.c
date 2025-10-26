#include<stdio.h>
int main(){
	int N=0,i;
	
	printf("Of How Many Numbers you want to reverse in Order:  ");
	scanf("%d",&N);
	
	int num[N];
	
	for(i=0;i<N;i++){
		printf("What is the num %d: ",i+1);
		scanf("%d",&num[i]);
	
	}
    for(i=N-1;i>=0;i--){
    
		printf("\nThe num %d: %d",N--,num[i]);
    }
	return 0;
}
