#include "funcs.h"

bool palindrom (QString strIn)
{

    strIn = strIn.toLower();

    for(int i = 0; i < strIn.length(); i++)
    {
        if(strIn[i] < "а" || strIn[i] > "я")
        {
            strIn.remove(i, 1);
            i--;
        }
    }

    for(int i = 0; i < strIn.length()/2; i++)
    {
        if(strIn[i] != strIn[strIn.length()-i-1]) return 0;
    }
    return 1;
}
