#include "perf-metric.hh"

PerfMetric::PerfMetric()
{
    operationCount = 0;
    compareCount = 0;
    space = 0;
}

PerfMetric::PerfMetric(char* buffer)
{
    operationCount = 0;
    compareCount = 0;
    space = 0;
    printBuffer = buffer;

}

void PerfMetric::PrintPerformanceMetrics()
{
    if (printBuffer == NULL)
    {
        cout << "Printing is not available for this instance!" << endl;
    }else
    {
        sprintf(printBuffer, "%8s\n", "Op Count");
        cout << printBuffer;
        sprintf(printBuffer, "%8d\n", operationCount);
        cout << printBuffer;
    }   
   
}

void PerfMetric::IncrementOp(int size)
{
    operationCount += size;
}

int PerfMetric::GetOpCount(){
    return operationCount;
}

void PerfMetric::MergeMetrics(PerfMetric &metrics)
{
    compareCount += metrics.compareCount;
    operationCount += metrics.operationCount;
    space += metrics.space;
}
