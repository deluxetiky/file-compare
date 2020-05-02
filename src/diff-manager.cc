#include "diff-manager.hh"

DiffManager::DiffManager(std::string fileSource, std::string fileDest, Algo algorithm)
{
    algorithm = algorithm;
}

DiffManager::~DiffManager()
{
    sourceData->clear();
    compareData->clear();
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
        fstream sourceFile,compareFile;
        sourceFile.open(programArgs[0]);
        compareFile.open(programArgs[1]);
        if(!sourceFile.is_open()){
            std::cout<<"Source file couldn't open!"<<std::endl;
            return;
        }
        if(!compareFile.is_open()){
            std::cout<<"Compare file couldn't open!"<<std::endl;
            return;
        }
        

        

    }
}

vector<Node> DiffManager::LoadDataIntoMemory(std::fstream source){
    return vector<Node>();
}

Search DiffManager::AlgorithmFactory(Algo algorithm){
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