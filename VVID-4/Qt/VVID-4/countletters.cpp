#include "funcs.h"


int countLetters(QString strIn)
{
    strIn = strIn.toLower();
    int count = 0;

    for(int i = 0; i < strIn.length(); i++)
    {
        if(strIn[i] < "а" || strIn[i] > "я")
        {
            strIn.remove(i, 1);
            i--;
        }
    }

    count = strIn.length();

    return count;
}
