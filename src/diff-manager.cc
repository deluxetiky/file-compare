#include "diff-manager.hh"

DiffManager::DiffManager(string fileSourcePath, string fileToComparePath, Algo algo)
{
    fstream sourceFile, compareFile;
    sourceFile.open(fileSourcePath);
    compareFile.open(fileToComparePath);

    if (!sourceFile.is_open())
    {
        cout << "Source file couldn't open!" << endl;
        return;
    }
    if (!compareFile.is_open())
    {
        cout << "Compare file couldn't open!" << endl;
        return;
    }
    LoadDataIntoMemory(sourceFile, sourceData);
    LoadDataIntoMemory(compareFile, compareData);
    sourceFile.close();
    compareFile.close();
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
        cout << "Invalid parameters.\n./app <sourcefile> <destfile> 'B|L'" << endl;
    }
    else
    {
        for (int i = 0; i < paramCount; i++)
        {
            cout << programArgs[i] << endl;
        }
        char algoParam = programArgs[2][0];

        if (algoParam == 'B')
            DiffManager(programArgs[1], programArgs[2],BINARYSEARCH);
        else if (algoParam == 'L')
            DiffManager(programArgs[1], programArgs[2],LINEARSEARCH);
        else
            DiffManager(programArgs[1], programArgs[2],algorithm);
    }
}

void DiffManager::LoadDataIntoMemory(fstream &source, unique_ptr<vector<Node>> &refData)
{
    string line;
    while (getline(source, line))
    {
        refData->push_back(Node(line));
    }
}

Search DiffManager::AlgorithmFactory(Algo algorithm)
{
    cout << "Algorithm factory" << endl;
    return Search();
}

void DiffManager::StartComparison()
{
    cout << "Comparison started" << endl;
}

void DiffManager::PrintPerformanceBenchmarks()
{
    cout << "Performance metrics" << endl;
}