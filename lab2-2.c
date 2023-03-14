#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); // 변수 i의 값 출력
printf("address of i == %p\n", &i);// 변수 i의 메모리 주소 출력
printf("value of ptr == %p\n", ptr); // ptr의 값 출력
printf("address of ptr == %p\n", &ptr); // ptr의 메모리 주소 출력
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); // 변수 i의 값 출력
printf("address of i == %p\n", &i); // 변수 i의 메모리 주소 출력
printf("value of ptr == %p\n", ptr); // ptr의 값인 변수 i의 메모리 주소 출력
printf("address of ptr == %p\n", &ptr); //ptr의 메모리 주소 출력
printf("value of *ptr == %d\n", *ptr); // ptr의 값 출력
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); // i의 값 출력
printf("address of i == %p\n", &i); //i의 메모리 주소 출력
printf("value of ptr == %p\n", ptr); // ptr의 값인 변수 i의 메모리 주소 출력
printf("address of ptr == %p\n", &ptr); //ptr의 메모리 주소 출력
printf("value of *ptr == %d\n", *ptr); // ptr의 값인 i의 값 출력
printf("value of dptr == %p\n", dptr); //dptr의 값인 ptr의 메모리 주소 출력
printf("address of dptr == %p\n", &dptr); //dptr의 메모리 주소 출력
printf("value of *dptr == %p\n", *dptr); //dptr이 가르키는 ptr주소의 값인 i의 주소 출력
printf("value of **dptr == %d\n", **dptr); //dptr이 ptr을 가리키고 ptr이 i를 가리키므로 1234출력
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i); //ptr이 i를 가리키고 있어 i의 값이 7777로 바뀜
printf("value of *ptr == %d\n", *ptr); //ptr의 값 출력
printf("value of **dptr == %d\n", **dptr); //dptr이 ptr을 가리키고 ptr이 i를 가리키므로 7777출력 
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i); //dptr이 ptr을 가리키고 i를 가리키므로 i값이 바뀜
printf("value of *ptr == %d\n", *ptr); //ptr이 i를 가리키고 있어 i의 값인 7777 출력
printf("value of **dptr == %d\n", **dptr);//dptr의 값 출력
return 0;
}