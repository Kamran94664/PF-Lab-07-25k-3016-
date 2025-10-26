#include<stdio.h>
int main(){
 int i,n;
 printf("Array Size=  ");
 scanf("%d",&n);
 
 int arr[n];
 
  for(i=0;i<n;i++){
  	printf("Element %d: ",i+1);
  	scanf("%d",&arr[i]);
  }
int j,found=0;

printf("Numbers ");

    for(i=0;i<n;i++){
      int count=1;
    		if (arr[i]==-1){
    		continue;
		}
    	for(j=i+1;j<n;j++){
    		if (arr[i]==arr[j]){
    		count++;
			arr[j]=-1;	
			}
		}
		if(count>1){
			if(found==1){
				printf(" and %d",arr[i]);
			}
			else{
				printf("%d ",arr[i]);
				found=1;
			}
			
		}
	}
  if(found==1){
  	printf(" in array occur more than once.");
  }
 return 0;
}
