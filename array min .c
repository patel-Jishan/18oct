#include<stdio.h>
int main(){
	printf("enter number of students :");
	int size,min;
   scanf("%d",&size);
   int students[size];
   int i;
   for(i=0;i<=size-1;i++){
   	printf("students[%d]:",i);
   	scanf("%d",&students[i]);
   }
   for(i=0;i<=size-1;i++){
   	printf("students[%d] :%d\n",i,students[i]);
   }
   min=students[0];
   for(i=0;i<=size-1;i++){
   	if(min>students[i]){
   		min=students[i];
	   }
	  
   }
   printf("%d",min);
   
   }
   	
