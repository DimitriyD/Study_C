#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "..\cmocka\include\cmocka.h"


int function_mg();


static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
int a = function_mg(3,4);
assert_int_equal( a,1);

 a = function_mg(3,5);
assert_int_equal( a,2);

    // все, заканчиваем... ниже ничего писать не надо
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}