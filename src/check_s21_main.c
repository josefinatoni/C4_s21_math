//
// Created by Killed Hizdahr on 17.01.2023.
//
#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "s21_math.h"

START_TEST(s21_abs_test) {
  ck_assert_uint_eq(abs(-15), s21_abs(-15));
  ck_assert_uint_eq(abs(13), s21_abs(13));
  ck_assert_uint_eq(abs(0), s21_abs(0));
  ck_assert_uint_eq(abs(1000), s21_abs(1000));
  ck_assert_uint_eq(abs(-1000), s21_abs(-1000));
  ck_assert_uint_eq(abs(-000001), s21_abs(-000001));
  ck_assert_uint_eq(abs(000001), s21_abs(000001));
}
END_TEST

START_TEST(s21_fabs_test) {
  ck_assert_uint_eq(fabs(-141.21313), s21_fabs(-141.21313));
  ck_assert_uint_eq(fabs(141.21313), s21_fabs(141.21313));
  ck_assert_uint_eq(fabs(S21_NAN), s21_fabs(S21_NAN));
  ck_assert_uint_eq(fabs(-S21_NAN), s21_fabs(-S21_NAN));
  ck_assert_uint_eq(fabs(S21_INF), s21_fabs(S21_INF));
  ck_assert_uint_eq(fabs(-S21_INF), s21_fabs(-S21_INF));
}
END_TEST

START_TEST(s21_ceil_test) {
  ck_assert_uint_eq(ceil(13.54), s21_ceil(13.54));
  ck_assert_uint_eq(ceil(13.54), s21_ceil(13.54));
  ck_assert_uint_eq(ceil(S21_INF), s21_ceil(S21_INF));
  ck_assert_uint_eq(ceil(-S21_INF), s21_ceil(-S21_INF));
  ck_assert_uint_eq(ceil(S21_NAN), s21_ceil(S21_NAN));
  ck_assert_uint_eq(ceil(-S21_NAN), s21_ceil(-S21_NAN));
}
END_TEST

START_TEST(s21_floor_test) {
  ck_assert_uint_eq(floor(1.5), s21_floor(1.5));
  ck_assert_uint_eq(floor(13.21313), s21_floor(13.21313));
  ck_assert_int_eq(floor(-100.213), s21_floor(-100.213));
  ck_assert_int_eq(floor(-3.01), s21_floor(-3.01));
  ck_assert_uint_eq(floor(S21_NAN), s21_floor(S21_NAN));
  ck_assert_uint_eq(floor(-S21_NAN), s21_floor(-S21_NAN));
  ck_assert_uint_eq(floor(S21_INF), s21_floor(S21_INF));
  ck_assert_uint_eq(floor(-S21_INF), s21_floor(-S21_INF));
}
END_TEST

START_TEST(s21_log_test) {
  ck_assert_int_eq(log(-13.54), s21_log(-13.54));
  ck_assert_uint_eq(log(0.0), s21_log(0.0));
  ck_assert_uint_eq(log(6.28), s21_log(6.28));
  ck_assert_uint_eq(log(S21_INF), s21_log(S21_INF));
  ck_assert_int_eq(log(0.1234), s21_log(0.1234));
}
END_TEST

START_TEST(s21_sqrt_test) {
  ck_assert_uint_eq(sqrt(0.0), s21_sqrt(0.0));
  ck_assert_uint_eq(sqrt(1.0), s21_sqrt(1.0));
  ck_assert_int_eq(sqrt(-123), s21_sqrt(-123));
  ck_assert_int_eq(sqrt(S21_NAN), s21_sqrt(S21_NAN));
  ck_assert_uint_eq(sqrt(-S21_NAN), s21_sqrt(-S21_NAN));
  ck_assert_uint_eq(sqrt(S21_INF), s21_sqrt(S21_INF));
  ck_assert_uint_eq(sqrt(-S21_INF), s21_sqrt(-S21_INF));
  ck_assert_uint_eq(sqrt(S21_M_PI), s21_sqrt(S21_M_PI));
  ck_assert_uint_eq(sqrt(-S21_M_PI), s21_sqrt(-S21_M_PI));
  ck_assert_uint_eq(sqrt(S21_M_E), s21_sqrt(S21_M_E));
  ck_assert_uint_eq(sqrt(-S21_M_E), s21_sqrt(-S21_M_E));
}
END_TEST

START_TEST(s21_exp_test) {
  ck_assert_uint_eq(exp(-S21_INF), s21_exp(-S21_INF));
  ck_assert_uint_eq(exp(S21_NAN), s21_exp(S21_NAN));
  ck_assert_uint_eq(exp(-S21_NAN), s21_exp(-S21_NAN));
  ck_assert_uint_eq(exp(S21_INF), s21_exp(S21_INF));
  ck_assert_uint_eq(exp(-S21_INF), s21_exp(-S21_INF));
}
END_TEST

START_TEST(s21_fmod_test) {
  ck_assert_uint_eq(fmod(0, 2.5), s21_fmod(0, 2.5));
  ck_assert_uint_eq(fmod(2.5, 2.5), s21_fmod(2.5, 2.5));
  ck_assert_int_eq(fmod(9, 0), s21_fmod(9, 0));
  ck_assert_uint_eq(fmod(-6, -S21_INF), s21_fmod(-6, -S21_INF));
  ck_assert_uint_eq(fmod(S21_INF, S21_INF), s21_fmod(S21_INF, S21_INF));
  ck_assert_uint_eq(fmod(S21_INF, S21_INF), s21_fmod(S21_INF, S21_INF));
}
END_TEST

START_TEST(s21_atan_test) {
  ck_assert_uint_eq(atan(3.14), s21_atan(3.14));
  ck_assert_uint_eq(atan(0.5), s21_atan(0.5));
  ck_assert_uint_eq(atan(1), s21_atan(1));
  ck_assert_uint_eq(atan(-1), s21_atan(-1));
  ck_assert_uint_eq(atan(S21_NAN), s21_atan(S21_NAN));
  ck_assert_uint_eq(atan(-S21_NAN), s21_atan(-S21_NAN));
  ck_assert_uint_eq(atan(S21_INF), s21_atan(S21_INF));
  ck_assert_uint_eq(atan(-S21_INF), s21_atan(-S21_INF));
}
END_TEST

START_TEST(s21_asin_test) {
  ck_assert_int_eq(asin(-13.54), s21_asin(-13.54));
  ck_assert_uint_eq(asin(0.5), s21_asin(0.5));
  ck_assert_int_eq(asin(1.5), s21_asin(1.5));
  ck_assert_int_eq(asin(-1.1), s21_asin(-1.1));
  ck_assert_uint_eq(asin(S21_NAN), s21_asin(S21_NAN));
  ck_assert_uint_eq(asin(-S21_NAN), s21_asin(-S21_NAN));
  ck_assert_uint_eq(asin(S21_INF), s21_asin(S21_INF));
  ck_assert_uint_eq(asin(-S21_INF), s21_asin(-S21_INF));
  ck_assert_uint_eq(asin(S21_M_PI), s21_asin(S21_M_PI));
  ck_assert_uint_eq(asin(-S21_M_PI), s21_asin(-S21_M_PI));
  ck_assert_uint_eq(asin(S21_MAX_LONG_DOUBLE), s21_asin(S21_MAX_LONG_DOUBLE));
  ck_assert_uint_eq(asin(-S21_MAX_LONG_DOUBLE), s21_asin(-S21_MAX_LONG_DOUBLE));
  ck_assert_uint_eq(asin(S21_M_E), s21_asin(S21_M_E));
  ck_assert_uint_eq(asin(-S21_M_E), s21_asin(-S21_M_E));
}
END_TEST

START_TEST(s21_acos_test) {
  ck_assert_uint_eq(acos(1), s21_acos(1));
  ck_assert_uint_eq(acos(-1), s21_acos(-1));
  ck_assert_uint_eq(acos(0.5), s21_acos(0.5));
  ck_assert_uint_eq(acos(-0.5), s21_acos(-0.5));
  ck_assert_int_ne(acos(-0.5), s21_acos(-1.5));
}
END_TEST

START_TEST(s21_sin_test) {
  ck_assert_uint_eq(sin(-13.54), s21_sin(-13.54));
  ck_assert_uint_eq(sin(13.54), s21_sin(13.54));
  ck_assert_int_eq(sin(S21_NAN), s21_sin(S21_NAN));
  ck_assert_uint_eq(sin(-S21_NAN), s21_sin(-S21_NAN));
  ck_assert_uint_eq(sin(S21_INF), s21_sin(S21_INF));
  ck_assert_uint_eq(sin(-S21_INF), s21_sin(-S21_INF));
  ck_assert_uint_eq(sin(S21_M_PI), s21_sin(S21_M_PI));
  ck_assert_uint_eq(sin(-S21_M_PI), s21_sin(-S21_M_PI));
  ck_assert_uint_eq(sin(S21_M_E), s21_sin(S21_M_E));
  ck_assert_uint_eq(sin(-S21_M_E), s21_sin(-S21_M_E));
}
END_TEST

START_TEST(s21_cos_test) {
  ck_assert_uint_eq(cos(13.54), s21_cos(13.54));
  ck_assert_uint_eq(cos(S21_NAN), s21_cos(S21_NAN));
  ck_assert_uint_eq(cos(-S21_NAN), s21_cos(-S21_NAN));
  ck_assert_uint_eq(cos(S21_INF), s21_cos(S21_INF));
  ck_assert_uint_eq(cos(-S21_INF), s21_cos(-S21_INF));
}
END_TEST

START_TEST(s21_tan_test) {
  ck_assert_int_eq(tan(-1.12), s21_tan(-1.12));
  ck_assert_uint_eq(tan(1.12), s21_tan(1.12));
  ck_assert_uint_eq(tan(0), s21_tan(0));
  ck_assert_int_eq(tan(S21_INF), s21_tan(S21_INF));
  ck_assert_uint_ne(tan(S21_MAX_LONG_DOUBLE), s21_tan(S21_MAX_LONG_DOUBLE));
}
END_TEST

START_TEST(s21_pow_test) {
  ck_assert_int_eq(pow(-1000.21313, 2.5), s21_pow(-1000.21313, 2.5));
  ck_assert_uint_eq(pow(32346234.21313, 0), s21_pow(32346234.21313, 0));
  ck_assert_uint_eq(pow(-S21_INF, -S21_INF), s21_pow(-S21_INF, -S21_INF));
  ck_assert_uint_eq(pow(-1, S21_INF), s21_pow(-1, S21_INF));
  ck_assert_uint_eq(pow(-1, -S21_INF), s21_pow(-1, -S21_INF));
  ck_assert_uint_eq(pow(4, S21_INF), s21_pow(4, S21_INF));
  ck_assert_int_eq(pow(-5, 8), s21_pow(-5, 8));
  ck_assert_int_eq(pow(-5.25, 7), s21_pow(-5.25, 7));
  ck_assert_uint_eq(pow(-0.5, -S21_INF), s21_pow(-0.5, -S21_INF));
  ck_assert_uint_eq(pow(-0.5, S21_INF), s21_pow(-0.5, S21_INF));
  ck_assert_int_eq(pow(-5, 0.3), s21_pow(-5, 0.3));
}
END_TEST

int main() {
  int failed = 0;
  Suite *s = suite_create("Core");
  TCase *tc = tcase_create("Core");
  SRunner *runner = srunner_create(s);

  suite_add_tcase(s, tc);
  tcase_add_test(tc, s21_abs_test);
  tcase_add_test(tc, s21_fabs_test);
  tcase_add_test(tc, s21_ceil_test);
  tcase_add_test(tc, s21_floor_test);
  tcase_add_test(tc, s21_log_test);
  tcase_add_test(tc, s21_sqrt_test);
  tcase_add_test(tc, s21_exp_test);
  tcase_add_test(tc, s21_fmod_test);
  tcase_add_test(tc, s21_atan_test);
  tcase_add_test(tc, s21_asin_test);
  tcase_add_test(tc, s21_acos_test);
  tcase_add_test(tc, s21_sin_test);
  tcase_add_test(tc, s21_cos_test);
  tcase_add_test(tc, s21_tan_test);
  tcase_add_test(tc, s21_pow_test);

  srunner_run_all(runner, CK_NORMAL);
  failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (failed == 0) ? 0 : 1;
}
