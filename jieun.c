#include <stdio.h>

int main()
{
int level, experience, amount;
printf("레벨을 입력하세요:");
scanf("%d", &level);
printf("경험치를 입력하세요:");
scanf("%d",&experience);
printf("재료의 기본 양을 입력하세요:");
scanf("%d",&amount);

printf("재료의 필요량: %d\n",amount*(level+experience));
printf("포션 제조 완료!\n");

return 0;
}
