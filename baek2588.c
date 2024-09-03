#include<stdio.h>
int main(){
	int num1,num2;
	int num21,num22,num23;
	//num 2의 첫째자리수, 둘때자리수, 셋째자리수
	scanf("%d",&num1);
	scanf("%d",&num2);
	num21=num2/100;
	num22=(num2%100)/10;
	num23=num2%10;
	printf("%d\n",num1*num23);
	printf("%d\n",num1*num22);
	printf("%d\n",num1*num21);
	printf("%d\n",num1*num2);
	return 0;
}
