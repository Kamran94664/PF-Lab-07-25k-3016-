#include<stdio.h>
int main(){
	int N=0,sum=0,i;
	
	printf("Of How Many Numbers you want the Sum of:  ");
	scanf("%d",&N);
	
	int num[N];
	
	for(i=0;i<N;i++){
		printf("WHat is the num %d: ",i+1);
		scanf("%d",&num[i]);
		
		sum+=num[i];
	}
	printf("\nThe Sum of %d numbers : %d ",N,sum);
	 
	return 0;
	
}
