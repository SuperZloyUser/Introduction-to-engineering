#include <QtTest>
#include <../funcs.h>
#include "tst_laba2tests.h"

void TestLaba2::test1() {

    QCOMPARE(okrugNK("1.29", 1), "1.3");
}

void TestLaba2::test2() {

    QCOMPARE(okrugNK("1239.999", 2), "1240");
}

void TestLaba2::test3() {

    QCOMPARE(okrugNK("0.9999999999", 6), "1");
}


