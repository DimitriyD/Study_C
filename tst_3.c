#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"

int function_year(int year);

static void test_1(void **state) {
    
      // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
    int year = 1700;

    assert_int_equal(function_year(year),12);
    // все, заканчиваем... ниже ничего писать не надо
}
static void test_2(void **state) {
    
      // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
    int year = 1918;

    assert_int_equal(function_year(year),26);
    // все, заканчиваем... ниже ничего писать не надо
}
static void test_3(void **state) {
    
      // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
    int year = 1919;

    assert_int_equal(function_year(year),13);
    // все, заканчиваем... ниже ничего писать не надо
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1),
        cmocka_unit_test( test_2),
        cmocka_unit_test( test_3),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}