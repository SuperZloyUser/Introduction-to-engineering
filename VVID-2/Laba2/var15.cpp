#include "funcs.h"

int var15 (QVector<float> &vec15) {

    int count = 0;

    for (int i = 0; i < vec15.size(); i++){
        if(i % 2 == 0) vec15[i] = 0;
        if(vec15[i]*100 < 1) count++;
    }

    return count;
    return 0;
}
