#include<stdio.h>

int main(){
	int a,b;
	printf("N1 : ");
	scanf("%d", &a);
	printf("N2 : ");
	scanf("%d", &b);
	
	if(a>b){
		printf("N1 %d ",(a-b));
	}else if(b>a){
		printf("N2 %d ",(b-a));
	}else{
		printf("N1\n");
		printf("N2\n");
	}
}
