#include <QtTest>
#include <../funcs.h>
#include "tst_laba2tests.h"

void TestLaba2::test1() {

    QCOMPARE(palindrom("Абба"), 1);
}

void TestLaba2::test2() {

    QCOMPARE(palindrom("А роза упала на лапу Азора"), 1);
}

void TestLaba2::test3() {

    QCOMPARE(palindrom("олРшРГРиорпгГггпРОИргрШрло"), 1);
}

