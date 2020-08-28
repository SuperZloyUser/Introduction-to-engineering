#include "funcs.h"

float sumAfterMax (QVector<float> &vec) {

    float sum = 0;
    int Number = numberOfMax(vec);

    for(int i = Number; i < vec.size(); i++)
        sum = sum + vec[i];

    return sum;
}
