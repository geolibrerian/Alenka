#include "cm.h"

void select(queue<string> op_type, queue<string> op_value, queue<int_type> op_nums, queue<float_type> op_nums_f, CudaSet* a,
            CudaSet* b, int_type old_reccount, vector<thrust::device_vector<int_type> >& distinct_tmp);
