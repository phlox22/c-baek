#include <stdio.h>

int main(){
    int arr[9];
    int i;
    for(i=0;i<9;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int num=1;
    int t;
    for(t=1;t<9;t++){
        if(max<arr[t]){
            max=arr[t];
            num=t+1;
        }
    }
    printf("%d\n",max);
    printf("%d\n",num);
}
