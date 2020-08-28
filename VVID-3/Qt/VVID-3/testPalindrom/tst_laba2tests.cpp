#include <QtTest>
#include <../funcs.h>
#include "tst_laba2tests.h"

void TestLaba2::test1() {

    QCOMPARE(alg("abc", 1), "bcd");
}

void TestLaba2::test2() {

    QCOMPARE(alg("z", 1), "a");
}

void TestLaba2::test3() {

    QCOMPARE(alg("abc", 3), "def");
}


