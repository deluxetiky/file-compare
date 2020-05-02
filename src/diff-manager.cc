#include "diff-manager.hh"

DiffManager::DiffManager(std::string fileSource, std::string fileDest, Algo algorithm)
{
    algorithm = algorithm;
}

DiffManager::~DiffManager()
{
    sourceFile->clear();
    compFile->clear();
}

DiffManager::DiffManager(int paramCount, const char **programArgs)
{
    if (paramCount < 3)
    {
        std::cout << "Invalid parameters.\n./app <sourcefile> <destfile> 'B|L'" << std::endl;
    }
    else
    {
        for (int i = 0; i < paramCount; i++)
        {
            std::cout << programArgs[i] << std::endl;
        }


    }
}

Search DiffManager::createAlgorithm(std::istream &in ,Algo algorithm){
    std::cout<< "Algorithm factory"<<std::endl;
    return Search();
}

void DiffManager::StartComparison()
{
    std::cout << "Comparison started" << std::endl;
}

void DiffManager::PrintPerformanceBenchmarks(){
    std::cout << "Performance metrics" << std::endl;
}