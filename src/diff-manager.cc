#include "diff-manager.hh"

DiffManager::DiffManager(string fileSourcePath, string fileToComparePath, Algo algo)
{
    Load(fileSourcePath, fileToComparePath, algo);
}

void DiffManager::Load(string fileSourcePath, string fileToComparePath, Algo algorithm)
{
    metrics = PerfMetric(printBuffer);
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
    isDataLoaded = true;

    compareAlgorithm = AlgorithmFactory(algorithm);
}

DiffManager::~DiffManager()
{
    sourceData.clear();
    compareData.clear();
    sourceFile.close();
    compareFile.close();
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
        char algoParam = programArgs[3][0];

        if (algoParam == 'B')
            Load(programArgs[1], programArgs[2], Algo::BINARYSEARCH);
        else if (algoParam == 'L')
            Load(programArgs[1], programArgs[2], Algo::LINEARSEARCH);
        else
            Load(programArgs[1], programArgs[2], Algo::BINARYSEARCH);
    }
}

void DiffManager::LoadDataIntoMemory(fstream &source, vector<Node> &refData)
{
    std::string line;
    while (getline(source, line))
    {
        if (line.size() > 0)
            refData.push_back(Node(line));
    }
}

Search DiffManager::AlgorithmFactory(Algo algorithm)
{
    cout << "Algorithm factory" << endl;
    Search runtimeSearch;
    switch (algorithm)
    {
    case BINARYSEARCH:
        runtimeSearch = BinarySearch(compareData);
        break;
    case LINEARSEARCH:
        runtimeSearch = LinearSearch();
        break;
    default:
        runtimeSearch = BinarySearch(compareData);
        break;
    }
    return runtimeSearch;
}

bool DiffManager::Ready()
{
    return isDataLoaded;
}

void DiffManager::StartComparison()
{
    cout << "Comparison started" << endl;
    // compareAlgorithm.Exist(std::string("s1"));
}

void DiffManager::PrintPerformanceBenchmarks()
{
    for(Node& node : compareData){
        metrics.MergeMetrics(node);
    }
    for(Node& node : sourceData){
        metrics.MergeMetrics(node);
    }
    metrics.MergeMetrics(compareAlgorithm);
    metrics.PrintPerformanceMetrics();
}