#include<stdio.h>

int main(){
	int a,b;
	printf("N1 : ");
	scanf("%d", &a);
	printf("N2 : ");
	scanf("%d", &b);
	
	if(a>b){
		printf("N1 %d \n",(a-b));
	}else if(b>a){
		printf("N2 %d \n",(b-a));
	}else{
		printf("N1=N2");
	}
}



