#include <QtTest>
#include <../funcs.h>
#include "tst_laba2tests.h"

bool compareVec(QVector<float> &vec1, QVector<float> &vec2) {
    if(vec1 == vec2) return 1;
    return 0;
}

void TestLaba2::test_case1() {
    QVector<float> before = {1, 5, 7, 0, 3, 9, 2};
    int count = var15(before);
    QVector<float> after = {0, 5, 0, 0, 0, 9, 0};

    QCOMPARE(true, compareVec(before, after));
    QCOMPARE(5, count);
}

void TestLaba2::test_case2() {
    QVector<float> before = {1, 200000.5};
    int count = var15(before);
    QVector<float> after = {0, 200000.5};

    QCOMPARE(true, compareVec(before, after));
    QCOMPARE(1, count);
}

void TestLaba2::test_case3() {
    QVector<float> before = {1, 22, 7, 0, 10};
    int count = var15(before);
    QVector<float> after = {1, 4, 0, 8, 8};

    QCOMPARE(false, compareVec(before, after));
    QCOMPARE(4, count);
}

void TestLaba2::test_case4() {
    QVector<float> before = {1, 22, 7, 0, 10};
    var16(before);
    QVector<float> after = {22, 10, 7, 1, 0};

    QCOMPARE(true, compareVec(before, after));
}

void TestLaba2::test_case5() {
    QVector<float> before = {210, 123, 345, 123, 5464};
    var16(before);
    QVector<float> after = {0, 0, 0, 0, 1};

    QCOMPARE(false, compareVec(before, after));
}

void TestLaba2::test_case6() {
    QVector<float> before = {210, 123, 345, 123, 5464};
    var16(before);
    QVector<float> after = {5464, 345, 210, 123, 123};

    QCOMPARE(true, compareVec(before, after));
}

void TestLaba2::test_case7() {
    QVector<float> before = {1, 22, 7, 0, 10};
    var17(before);
    QVector<float> after = {5464, 345, 210, 123, 123};

    QCOMPARE(false, compareVec(before, after));
}

void TestLaba2::test_case8() {
    QVector<float> before = {1, 22, 7, 0, 10};
    var17(before);
    QVector<float> after = {8, 22, 8, 0, 8};

    QCOMPARE(true, compareVec(before, after));
}

void TestLaba2::test_case9() {
    QVector<float> before = {14, 98, 63, 81, 37, 10, 67, 54};
    var17(before);
    QVector<float> after = {53, 98, 53, 81, 53, 10, 53, 54};

    QCOMPARE(true, compareVec(before, after));
}





void TestLaba2::test_negative() {
    QVector<float> before = {-23, -13, -237, -123, -43, -132, -85};
    int Number = numberOfMax(before);
    float sum = sumAfterMax(before);

    QCOMPARE(2, Number);
    QCOMPARE(-620, sum);
}

void TestLaba2::test_last_max() {
    QVector<float> before = {8, 22, 123, 84, 10000};
    int Number = numberOfMax(before);
    float sum = sumAfterMax(before);

    QCOMPARE(5, Number);
    QCOMPARE(0, sum);
}

void TestLaba2::test_zero() {
    QVector<float> before = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int Number = numberOfMax(before);
    float sum = sumAfterMax(before);

    QCOMPARE(1, Number);
    QCOMPARE(0, sum);
}
