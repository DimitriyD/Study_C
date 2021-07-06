#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"


static void test_1(void **state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)

extern int mg;
extern char qqz;
assert_int_equal(mg,0);
assert_int_equal(mg,qqz);
mg=123;
qqz=7;

assert_int_equal(mg,123);
assert_int_equal(qqz,7);

mg++;

assert_int_equal(mg,124);

mg=mg + 1;
assert_int_equal(mg,125);

mg--;

assert_int_equal(mg,124);

mg=mg - 1;
assert_int_equal(mg,123);

mg=mg - qqz;
assert_int_equal(mg,116);


    // все, заканчиваем... ниже ничего писать не надо
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}