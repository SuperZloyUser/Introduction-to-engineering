#include <QtTest>
#include <../funcs.h>
#include "tst_laba2tests.h"

void TestLaba2::test1()
{

    QCOMPARE(palindrom("Абба"), true);
}

void TestLaba2::test2()
{

    QCOMPARE(palindrom("А роза упала на лапу Азора"), true);
}

void TestLaba2::test3()
{

    QCOMPARE(palindrom("олРшРГРиорпгГггпРОИргрШрло"), true);
}

void TestLaba2::test4()
{

    QCOMPARE(countGlas("ааа"), 3);
}

void TestLaba2::test5()
{

    QCOMPARE(countGlas("пртвнкт"), 0);
}

void TestLaba2::test6()
{

    QCOMPARE(countGlas("йАйюйойейУйийяйОйайёйэйийййййй"), 12);
}

void TestLaba2::test7()
{

    QCOMPARE(countLetters("ааа"), 3);
}

void TestLaba2::test8()
{

    QCOMPARE(countLetters("ы3423о234ф23423в-р-о-ы--вд-л-о-ф-ы-и-щ-в-ф-ш231241"), 18);
}

void TestLaba2::test9()
{

    QCOMPARE(countLetters("йАйюйойейУйийяйОйайёйэйийййййй"), 29);
}

void TestLaba2::test10()
{

    QCOMPARE(countSogl("ааа"), 0);
}

void TestLaba2::test11()
{

    QCOMPARE(countSogl("пртвнкт"), 7);
}

void TestLaba2::test12()
{

    QCOMPARE(countSogl("йАйюйойейУйийяйОйайёйэйийййййй"), 18);
}

void TestLaba2::test13()
{

    QCOMPARE(okrugNK("1.29", 1), "1.3");
}

void TestLaba2::test14()
{

    QCOMPARE(okrugNK("1239.999", 2), "1240");
}

void TestLaba2::test15()
{

    QCOMPARE(okrugNK("0.9999999999", 6), "1");
}

void TestLaba2::test16()
{

    QCOMPARE(alg("abc", 1), "bcd");
}

void TestLaba2::test17()
{

    QCOMPARE(alg("z", 1), "a");
}

void TestLaba2::test18()
{

    QCOMPARE(alg("abc", 3), "def");
}

void TestLaba2::test19()
{

    QCOMPARE(countOfLetterA("dfgerger"), 0);
}

void TestLaba2::test20()
{

    QCOMPARE(countOfLetterA("aaaaaAAaa"), 9);
}

void TestLaba2::test21()
{

    QCOMPARE(countOfLetterA("abc"), 1);
}

void TestLaba2::test22()
{

    QCOMPARE(countOfLetterZ("abc"), 0);
}

void TestLaba2::test23()
{

    QCOMPARE(countOfLetterZ("zxc"), 1);
}

void TestLaba2::test24()
{

    QCOMPARE(countOfLetterZ("ZzZzZzzzZZ"), 10);
}

