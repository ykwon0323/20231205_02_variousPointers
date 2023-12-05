/**
 * 
 * 다양한 포인터
 * 함수 포인터 (function pointer)
 * 
 * 프로그램에서 정의된 함수는 프로그램이 실행될 때 모두 메인 메모리에 올라가게 됨
 * 이때 함수의 이름은 메모리에 올라간 함수의 시작 주소를 가리키는 포인터 상수(constant pointer)가 됨
 * 이렇게 함수의 시작 주소를 가리키는 포인터 상수를 함수 포인터(function pointer)라고 부름
 * 
 * 함수 포인터의 포인터 타입은 함수의 반환값과 매개변수에 의해 결정
 * 함수의 원형을 알아야만 해당 함수에 맞는 함수 포인터를 만들 수 있음
 * 
 * 함수 원형 
 * ~~~~~~~~
 * void func(int, int);
 * ~~~~~~~~
 * 
 * 함수 포인터
 * ~~~~~~~~
 * void(*ptr_func)(int, int);
 * ~~~~~~~~
 * 
 * 함수 포인터 사용시 연산자의 우선순위 때문에 반드시 *ptr_func 부분을 괄호()로 둘러싸야 함
 * 
 * 함수 포인터는 함수를 또 다른 함수의 인수로 전달할 때 유용하게 사용
 * 
*/

# include <stdio.h>

double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);
double calculator(double , double, double (*func)(double, double));

int main(void){
    double (*calc)(double, double) = NULL; // 함수 포인터 선언
    double result = 0;
    double num01 = 3, num02 = 5;
    char oper = '*';

    switch (oper)
    {
        case '+':
            calc = add;
            break;
        case '-':
            calc = sub;
            break;
        case '*':
            calc = mul;
            break;
        case '/':
            calc = div;
            break;
        default:
            puts("사칙연산(+, -, *, /)만을 지원합니다");
    }

    result = calculator(num01, num02, calc);
    printf("사칙 연산의 결과는 %lf 입니다 \n", result);

    return 0;
}

double add(double num01, double num02)
{
	return num01 + num02;
}

double sub(double num01, double num02)
{
	return num01 - num02;
}

double mul(double num01, double num02)
{
	return num01 * num02;
}

double div(double num01, double num02)
{
	return num01 / num02;
}
double calculator(double num01, double num02, double (*func)(double, double))
{
	return func(num01, num02);
}




