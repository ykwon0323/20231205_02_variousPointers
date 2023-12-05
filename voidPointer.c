/**
 * 다양한 포인터
 * void 포인터
 * = 대상이 되는 데이터의 타입을 명시하지 않은 포인터
 * 변수, 함수, 포인터 등 어떠한 값도 가리킬수 있지만, 
 * 포인터 연산이나 메모리 참조와 같은 작업은 할 수 없음
 * 
 * 즉, void 포인터는 주소값을 저장하는 것 이외에는 아무것도 할 수 없는 포인터
 * 또한, void 포인터를 사용할 때에는 반드시 먼저 사용하고자 하는 타입으로 명시적 타입 변환 작업을 거친 후에 사용해야 함
 * 
*/

# include <stdio.h>

int main(void){

    int num = 10; // 변수 선언
    void* ptr_num = &num; // void 포인터 선언

    printf("변수 num가 저장하고 있는 값은 %d 입니다\n", num);
    printf("void 포인터 ptr_num가 가르키는 주소의 저장된 값은 %d 입니다 \n", *(int*)ptr_num);

    *(int*)ptr_num = 20; // void 포인터를 통한 메모리 접근
    printf("void 포인터 ptr_num가 가르키는 주소의 저장된 값은 %d 입니다 \n", *(int*)ptr_num);

    return 0;
}