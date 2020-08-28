#include "funcs.h"

QString alg(QString strIn, int u)
{

    u = u %26;

    for(int i = 0; i < strIn.length(); i++)
    {
        if(strIn[i] < "a" || strIn[i] > "z")
        {
            if(strIn[i] < "A" || strIn[i] > "Z")
            {
                strIn.remove(i, 1);
                i--;
            }
        }
    }

    for(int i = 0; i < strIn.length(); i++)
    {
        if(strIn[i].toLatin1() + u > 122) strIn[i] = char(strIn[i].toLatin1() + u - 26);
        else {
            if(strIn[i].toLatin1() + u > 90 && strIn[i].toLatin1() < 91) strIn[i] = char(strIn[i].toLatin1() + u - 26);
            else
            {
                strIn[i] = char(strIn[i].toLatin1() + u);
            }
        }
    }

    return strIn;
}
