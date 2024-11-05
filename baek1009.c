#include<stdio.h>
#include<math.h>

int main(void){
	int t;
	scanf("%d",&t);
	int r[t];
	for (int i=0;i<t;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		double k=pow(a,b);
		r[i]=((int)k)%10;
	}
	for (int i=0;i<t;i++){
		printf("%d",r[i]);
	}
	return 0;
	
}
