#include "funcs.h"


int countOfLetterA(QString strIn)
{
    strIn = strIn.toLower();
    int count = 0;

    for(int i = 0; i < strIn.length(); i++)
    {
        if(strIn[i] == 'a') count++;
    }

    return count;
}
