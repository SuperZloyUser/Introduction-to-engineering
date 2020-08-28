#include <QtTest>
#include <../funcs.h>
#include "tst_laba2tests.h"

void TestLaba2::test1() {

    QCOMPARE(countGlas("ааа"), 3);
}

void TestLaba2::test2() {

    QCOMPARE(countGlas("пртвнкт"), 0);
}

void TestLaba2::test3() {

    QCOMPARE(countGlas("йАйюйойейУйийяйОйайёйэйийййййй"), 12);
}


