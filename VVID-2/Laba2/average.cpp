#include "funcs.h"

float average (QVector<float> &vec) {

    float sum = 0;
    for(int i = 0; i < vec.size(); i++)
        sum = sum + vec[i];

    return sum/vec.size();
}
