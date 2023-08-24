#include<stdio.h>
int main(){
	int n,i,j,temp;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Array Elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
		printf("Second smallest number is %d",arr[1]);
		printf("Second largest number is %d",arr[n-2]);
}
