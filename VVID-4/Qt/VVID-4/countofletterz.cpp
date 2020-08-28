#include "funcs.h"


int countOfLetterZ(QString strIn)
{
    strIn = strIn.toLower();
    int count = 0;

    for(int i = 0; i < strIn.length(); i++)
    {
        if(strIn[i] == 'z') count++;
    }

    return count;
}
