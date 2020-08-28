#include "funcs.h"


QString okrugNK(QString strIn, int u)
{

    int dot = 0;
    int flag = 0;
    int dot_flag = 0;

    for(int i = 0; i < strIn.length(); i++)
    {
        if(strIn[i] == ".")
        {
            dot = i;
            break;
        }
    }

    if(strIn[dot + u + 1] > "4") u++;

    for(int i = 0; i < 10000; i++)
    {

        if(strIn[dot + u - i] == ".")
        {
            i++;
            dot_flag = 1;
            flag = 0;
            strIn.remove(dot, strIn.length() - dot);
        }

        if(dot_flag == 1)
        {
            if(strIn[dot + u - i] == "9" && dot + u - i == 0)
            {
                strIn[0] = '0';
                strIn = "1" + strIn;
                break;
            }

            if(strIn[dot + u - i] < "9")
            {
                strIn[dot + u - i] = char(strIn[dot + u - i].toLatin1() + 1);
                break;

            } else
            {
                strIn[dot + u - i] = '0';
            }
        }

        if(strIn[dot + u - i] >= "5" && dot_flag == 0 && flag != 0 && strIn[dot + u - i] != "9")
        {
            strIn.remove(dot + u - i + 1, strIn.length() - dot - u - 1 + i);
            strIn[strIn.length()-1] = char(strIn[strIn.length()-1].toLatin1() + 1);
            break;
        }

        if(strIn[dot + u - i] < "5" && dot_flag == 0)
        {

            if(flag == 0)
            {
                strIn.remove(dot + u - i + 1, strIn.length() - dot - u);
                break;
            }
            if(flag != 0)
            {
                strIn.remove(dot + u - i + 1, strIn.length() - dot - u - 1 + i);
                strIn[strIn.length()-1] = char(strIn[strIn.length()-1].toLatin1() + 1);
                break;
            }

        } else {
                flag++;
            }
    }

    return strIn;
}
