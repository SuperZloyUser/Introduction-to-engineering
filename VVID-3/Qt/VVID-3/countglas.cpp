#include "funcs.h"

int countGlas(QString strIn)
{
    strIn = strIn.toLower();
    int count = 0;

    for(int i = 0; i < strIn.length(); i++)
    {
        if(strIn[i] == "а") count ++;
        if(strIn[i] == "у") count ++;
        if(strIn[i] == "о") count ++;
        if(strIn[i] == "ы") count ++;
        if(strIn[i] == "и") count ++;
        if(strIn[i] == "э") count ++;
        if(strIn[i] == "я") count ++;
        if(strIn[i] == "ю") count ++;
        if(strIn[i] == "е") count ++;
        if(strIn[i] == "ё") count ++;
    }

    return count;
}
