#include<stdio.h>

int main() {

    int i;
    int *ptr;
    int **dptr;

    printf("[----- 장예서, 2021041018 -----]\n\n");

    i = 1234;

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);                    //i의 값은 위에서 대입된 대로 1234
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);                //ptr을 선언만 하고 초기화하지 않았기 때문에 쓰레기값 저장
    printf("address of ptr == %p\n", &ptr);


    ptr = &i;           /* ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);                    //i의 값은 변하지 않는다.
    printf("address of i == %p\n", &i);                 //i의 주소는 변하지 않는다.
    printf("value of ptr == %p\n", ptr);                //ptr에 i의 주소가 대입되었으므로 이제 i의 주소를 출력
    printf("address of ptr == %p\n", &ptr);             //ptr의 주소는 변하지 않는다.
    printf("value of *ptr == %d\n", *ptr);              //ptr이 가리키는 값은 i의 값과 같으므로 i의 값을 출력 


    dptr = &ptr;        /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = ptr]\n");
    printf("value of i == %d\n", i);                    //i의 값은 변하지 않는다.
    printf("address of i == %p\n", &i);                 //1의 주소는 변하지 않는다.
    printf("value of ptr == %p\n", ptr);                //ptr의 값 = i의 주소는 변하지 않는다.
    printf("address of ptr == %p\n", &ptr);             //ptr의 주소는 변하지 않는다.
    printf("value of *ptr == %d\n", *ptr);              //ptr이 가리키는 값 = i의 값은 변하지 않는다.
    printf("value of dptr == %p\n", dptr);              //dptr에 ptr의 주소가 대입되었으므로 ptr의 주소를 출력
    printf("address of dptr == %p\n", &dptr);
    printf("value of *dptr == %p\n", *dptr);            //dptr이 가리키는 값은 ptr의 값과 같으므로 i의 주소를 출력
    printf("value of **dptr == %d\n", **dptr);          //dptr이 가리키는 것이 가리키는 값은 ptr이 가리키는 값과 같으므로 i의 값을 출력


    *ptr = 7777;        /* changing the value of ptr */

    printf("\n[after *ptr = 7777]\n");                  //ptr이 가리키는 값을 바꾼다는 것은 i의 값을 바꾼다는 의미이다.
    printf("value of i == %d\n", i);                    //앞서 서술한 것과 같은 이유로 i의 값이 1234에서 7777로 변한다.
    printf("value of *ptr == %d\n", *ptr);              //ptr이 가리키는 값 = i의 값이므로 7777로 변한다.
    printf("value of **dptr == %d\n", **dptr);          //dptr이 가리키는 것이 가리키는 값 = ptr이 가리키는 값 = i의 값이므로 7777로 변한다.


    **dptr = 8888;      /* changing the value of dptr */

    printf("\n[after **dptr = 8888]\n");                //dptr이 가리키는 것이 가리키는 값을 바꾼다는 것은 결국 i의 값을 바꾼다는 의미이다.
    printf("value of i == %d\n", i);                    //앞서 서술한 것과 같은 이유로 i의 값이 7777에서 8888로 변한다.
    printf("value of *ptr == %d\n", *ptr);              //ptr이 가리키는 값 = i의 값이므로 8888로 변한다.
    printf("value of **dptr == %d\n", **dptr);          //dptr이 가리키는 것의 가리키는 값 = ptr이 가리키는 값 = i의 값이므로 8888로 변한다.

    return 0;

}