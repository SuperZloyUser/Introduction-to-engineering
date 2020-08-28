#include "funcs.h"

void var16 (QVector<float> &vec16) {

   std::sort(vec16.begin(), vec16.end(), std::greater<float>());

    /*for(int i = 0; i < vec16.size(); i++)
        for( int j = i; j < vec16.size(); j++)
            if(vec16[i] < vec16[j]) std::swap(vec16[i], vec16[j]);*/

}
