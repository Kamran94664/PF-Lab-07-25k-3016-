#include<stdio.h>
	int search(int arr[],int n);
int main(){
	int arr[10];
	int i,result;
	for(i=0;i<10;i++){
		printf("NUM %d= ",i+1);
		scanf("%d",&arr[i]);
	}
	result=search(arr,10);
	
	if(result!= -1){
		printf("The index of your required value is: %d",result);
         }
    else{
    	printf("Integer Not Found");
	}     
         
    return 0;
}
int search(int arr[], int n) {
	int index=-1, j,x;	
		printf("which value you want to search: ");
		scanf("%d",&x);
	
		
		for(j=0;j<n;j++){
			if(arr[j]==x){
				index=j;
				break;
			} 
		}
		return index;
	}

