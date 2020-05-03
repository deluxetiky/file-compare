#ifndef _PERF_METRIC_HH
#define _PERF_METRIC_HH

#include <iostream>
#include <memory>

using namespace std;

class PerfMetric{
    public:
        PerfMetric();   
        PerfMetric(char* printBuffer);      
        void PrintPerformanceMetrics();  
        void IncrementOp(int size);
        void MergeMetrics(PerfMetric& metrics);
    protected:
        char* printBuffer;
        int operationCount;
        int compareCount;
        int space;
};
#endif