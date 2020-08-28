#include "funcs.h"

void var17 (QVector<float> &vec17) {

    float avg = average(vec17);

    for(int i = 0; i < vec17.size(); i++)
        if(i % 2 == 0) vec17[i] = avg;

}
