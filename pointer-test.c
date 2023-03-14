#include <stdio.h>
int main()
{
int i, *p;
i = 10;
printf("value of i = %d\n", i); // 변수 i의 값 출력
printf("address of i = %p\n", &i); // 변수 i의 메모리 주소 출력
printf("value of p = %p\n", p);// p의 값을 출력
printf("address of p = %p\n", &p);// p의 메모리 주소를 출력
p = &i;// i의 메모리 주소를 포인터 변수 p에 대입
printf("\n\n----- after p = &i ------------\n\n");
printf("value of p = %p\n", p);// 변수 p에 들어있는 메모리 주소가 아니라 i의 주소가 출력
printf("address of p = %p\n", &p);// 포인터 변수 p의 메모리 주소 출력
printf("dereferencing *p = %d\n", *p);// p주소값이 가리키는 실제 값 출력
return 0;
}
