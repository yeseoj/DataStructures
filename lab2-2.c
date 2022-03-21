#include<stdio.h>

int main() {

    int i;
    int *ptr;
    int **dptr;

    printf("[----- �忹��, 2021041018 -----]\n\n");

    i = 1234;

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);                    //i�� ���� ������ ���Ե� ��� 1234
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);                //ptr�� ���� �ϰ� �ʱ�ȭ���� �ʾұ� ������ �����Ⱚ ����
    printf("address of ptr == %p\n", &ptr);


    ptr = &i;           /* ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);                    //i�� ���� ������ �ʴ´�.
    printf("address of i == %p\n", &i);                 //i�� �ּҴ� ������ �ʴ´�.
    printf("value of ptr == %p\n", ptr);                //ptr�� i�� �ּҰ� ���ԵǾ����Ƿ� ���� i�� �ּҸ� ���
    printf("address of ptr == %p\n", &ptr);             //ptr�� �ּҴ� ������ �ʴ´�.
    printf("value of *ptr == %d\n", *ptr);              //ptr�� ����Ű�� ���� i�� ���� �����Ƿ� i�� ���� ��� 


    dptr = &ptr;        /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = ptr]\n");
    printf("value of i == %d\n", i);                    //i�� ���� ������ �ʴ´�.
    printf("address of i == %p\n", &i);                 //1�� �ּҴ� ������ �ʴ´�.
    printf("value of ptr == %p\n", ptr);                //ptr�� �� = i�� �ּҴ� ������ �ʴ´�.
    printf("address of ptr == %p\n", &ptr);             //ptr�� �ּҴ� ������ �ʴ´�.
    printf("value of *ptr == %d\n", *ptr);              //ptr�� ����Ű�� �� = i�� ���� ������ �ʴ´�.
    printf("value of dptr == %p\n", dptr);              //dptr�� ptr�� �ּҰ� ���ԵǾ����Ƿ� ptr�� �ּҸ� ���
    printf("address of dptr == %p\n", &dptr);
    printf("value of *dptr == %p\n", *dptr);            //dptr�� ����Ű�� ���� ptr�� ���� �����Ƿ� i�� �ּҸ� ���
    printf("value of **dptr == %d\n", **dptr);          //dptr�� ����Ű�� ���� ����Ű�� ���� ptr�� ����Ű�� ���� �����Ƿ� i�� ���� ���


    *ptr = 7777;        /* changing the value of ptr */

    printf("\n[after *ptr = 7777]\n");                  //ptr�� ����Ű�� ���� �ٲ۴ٴ� ���� i�� ���� �ٲ۴ٴ� �ǹ��̴�.
    printf("value of i == %d\n", i);                    //�ռ� ������ �Ͱ� ���� ������ i�� ���� 1234���� 7777�� ���Ѵ�.
    printf("value of *ptr == %d\n", *ptr);              //ptr�� ����Ű�� �� = i�� ���̹Ƿ� 7777�� ���Ѵ�.
    printf("value of **dptr == %d\n", **dptr);          //dptr�� ����Ű�� ���� ����Ű�� �� = ptr�� ����Ű�� �� = i�� ���̹Ƿ� 7777�� ���Ѵ�.


    **dptr = 8888;      /* changing the value of dptr */

    printf("\n[after **dptr = 8888]\n");                //dptr�� ����Ű�� ���� ����Ű�� ���� �ٲ۴ٴ� ���� �ᱹ i�� ���� �ٲ۴ٴ� �ǹ��̴�.
    printf("value of i == %d\n", i);                    //�ռ� ������ �Ͱ� ���� ������ i�� ���� 7777���� 8888�� ���Ѵ�.
    printf("value of *ptr == %d\n", *ptr);              //ptr�� ����Ű�� �� = i�� ���̹Ƿ� 8888�� ���Ѵ�.
    printf("value of **dptr == %d\n", **dptr);          //dptr�� ����Ű�� ���� ����Ű�� �� = ptr�� ����Ű�� �� = i�� ���̹Ƿ� 8888�� ���Ѵ�.

    return 0;

}