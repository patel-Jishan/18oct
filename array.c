# include<stdio.h>
int main(){
	printf("enter number of students:");
	int size;
	scanf("%d",&size);
	int students[size]; 
	int i;
	for(i=0;i<=size;i++){
		printf("students[%d] :",i);
		scanf("%d",&students[i]);
		
	}
	for(i=0;i<=size;i++){
		printf("students[%d] :%d\n",i,students[i]);
	}
}
