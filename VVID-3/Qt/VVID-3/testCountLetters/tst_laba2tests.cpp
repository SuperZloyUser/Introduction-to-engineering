#include <QtTest>
#include <../funcs.h>
#include "tst_laba2tests.h"

void TestLaba2::test1() {

    QCOMPARE(countLetters("ааа"), 3);
}

void TestLaba2::test2() {

    QCOMPARE(countLetters("ы3423о234ф23423в-р-о-ы--вд-л-о-ф-ы-и-щ-в-ф-ш231241"), 18);
}

void TestLaba2::test3() {

    QCOMPARE(countLetters("йАйюйойейУйийяйОйайёйэйийййййй"), 29);
}


