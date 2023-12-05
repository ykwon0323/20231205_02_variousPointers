/**
 * 다양한 포인터
 * 포인터의 포인터
 * = 포인터 변수를 가리키는 포인터
 * 참조연산자(*)를 두번 사용하여 표현
 * 이중 포인터
 * 
 * 
*/
# include <stdio.h>

int main(void){
    int num = 10; // 변수선언 
    int* ptr_num = &num; // 포인터 선언
    int** pptr_num = &ptr_num; // 포인터의 포인터 선언

    printf("변수 num이 저장하고 있는 값은 %d 입니다 \n", num);
    printf("포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다 \n", *ptr_num);
    // printf("포인터 ptr_num가 가리키는 주소에 저장된 값은 %#x입니다 \n", ptr_num);
    // printf("포인터의 포인터 pptr_num가 가리키는 주소에 저장된 포인터가 가리키는 주소에 저장된 값은 %#x 입니다 \n", *pptr_num);
    printf("포인터의 포인터 pptr_num가 가리키는 주소에 저장된 포인터가 가리키는 주소에 저장된 값은 %d 입니다 \n", **pptr_num);
    // printf("포인터의 포인터 pptr_num가 가리키는 주소에 저장된 포인터가 가리키는 주소에 저장된 값은 %#x 입니다 \n", pptr_num);

}