#include <stdio.h>
int main (void){
	int n1;
	int n2;
	int total;
	printf("Hello Please Enter The First Number: ");
	scanf("%d",&n1);
	printf("Hello Please Enter The Second Number: ");
	scanf("%d",&n2);
	total = n1 - n2;
	printf("Okay Your Total Is: %d",total);
}