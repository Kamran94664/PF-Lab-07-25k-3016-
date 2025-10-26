#include<stdio.h>
int main(){
	int firstarr[5],secondarr[5],thirdarr[10],i;
		
	printf("Give five integers for First Array:\n ");	
	
	 for(i=0;i<5;i++){
		printf("A1 num %d: ",i+1);
		scanf("%d",&firstarr[i]);
	} 
	
	printf("Give five integers for Second Array:\n ");
	 for(i=0;i<5;i++){
	   printf("A2 num %d: ",i+1);
		scanf("%d",&secondarr[i]);	
	 }
	 printf("\nNow Merging...\n");
	 
	 for(i=0;i<5;i++){
	 	thirdarr[i]=firstarr[i];
	 }
	 for(i=0;i<5;i++){
	 	thirdarr[i+5]=secondarr[i];
	 }
	for(i=0;i<10;i++){
	printf("\nA3 num %d= %d",i+1,thirdarr[i]);
	}
	return 0;
}
