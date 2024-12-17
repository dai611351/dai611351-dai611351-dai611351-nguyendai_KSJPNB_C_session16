#include <stdio.h>


void delete(int *arr, int index, int *length);
int main(){
	int arr[50]={5,3,2,6,8,3,2,5,9};
	int length=9;
	int deleteIndex;
	printf("moi ban nhap vi tri can xoa tu 0 toi 8 ");
	scanf("%d",&deleteIndex);
	printf("\nmang truoc khi xoa");
	for(int i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	delete(arr, deleteIndex, &length);
	printf("\nmang sau khi xoa");
	for(int i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
}
void delete(int *arr,int index,int *length){
	for(int i=index;i<*length;i++){
		*(arr+i)=*(arr+i+1);
	}
	(*length)--;
}
