#include "diff-manager.hh"

DiffManager::DiffManager(std::string fileSource, std::string fileDest, Algo algorithm)
{
    algorithm = algorithm;
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

void DiffManager::StartComparison()
{
    std::cout << "Comparison started" << std::endl;
}