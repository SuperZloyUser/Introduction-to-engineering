#include "tst_laba2tests.h"

int main(int argc, char **argv)
{
    TestLaba2 testObject;
    return QTest::qExec(&testObject, argc, argv);
}
