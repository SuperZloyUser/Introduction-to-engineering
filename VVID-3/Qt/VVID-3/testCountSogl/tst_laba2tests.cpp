#include <QtTest>
#include <../funcs.h>
#include "tst_laba2tests.h"

void TestLaba2::test1() {

    QCOMPARE(countSogl("ааа"), 0);
}

void TestLaba2::test2() {

    QCOMPARE(countSogl("пртвнкт"), 7);
}

void TestLaba2::test3() {

    QCOMPARE(countSogl("йАйюйойейУйийяйОйайёйэйийййййй"), 18);
}


