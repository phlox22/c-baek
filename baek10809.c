#include<stdio.h>
#include <string.h>

int main(){
	int num[26];
	char word[101];
	int t;
	scanf("%s",word);

	for(int i=0;i<26;i++){
		num[i]=-1;}
	for (int j=0;j<strlen(word);j++){
		t=word[j]-'a';
		if(num[t]==-1){
			num[t]=j;
		}}
	for (int i=0;i<26;i++){
		printf("%d ",num[i]);}
	return 0;

}

