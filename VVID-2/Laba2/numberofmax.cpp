#include "funcs.h"

int numberOfMax (QVector<float> &vec) {

    int Number = 0;
    float max = -99999;

    for(int i = 0; i < vec.size(); i++)
        if(max < vec[i]) {
            max = vec[i];
            Number = i;
        }

    return Number + 1;
}
