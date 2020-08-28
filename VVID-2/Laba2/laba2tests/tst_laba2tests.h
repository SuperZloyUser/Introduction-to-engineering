#ifndef TST_LABA2TESTS_H
#define TST_LABA2TESTS_H

#include <QtCore>
#include <QtTest/QtTest>

class TestLaba2 : public QObject
{
    Q_OBJECT

private slots:
    void test_case1();
    void test_case2();
    void test_case3();
    void test_case4();
    void test_case5();
    void test_case6();
    void test_case7();
    void test_case8();
    void test_case9();
    void test_negative();
    void test_last_max();
    void test_zero();
};

#endif // TST_LABA2TESTS_H
