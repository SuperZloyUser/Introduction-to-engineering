#include "funcs.h"


int countSogl(QString strIn)
{
    strIn = strIn.toLower();
    int count = 0;

    for(int i = 0; i < strIn.length(); i++)
    {
        if(strIn[i] != "а" && strIn[i] != "у" && strIn[i] != "о" && strIn[i] != "ы" && strIn[i] != "и" &&
                strIn[i] != "э" && strIn[i] != "я" && strIn[i] != "ю" && strIn[i] != "е" && strIn[i] != "ё") count ++;
    }

    return count;
}
