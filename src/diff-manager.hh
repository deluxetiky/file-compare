#ifndef _DIFF_MANAGER_
#define _DIFF_MANAGER_

#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include "search.hh"
#include "node.hh"
#include <fstream>
using namespace std;
class DiffManager
{

public:
    enum Algo
    {
        BINARYSEARCH,
        LINEARSEARCH
    };
    Algo algorithm = BINARYSEARCH; //Default selected algorithm
    DiffManager(string fileSource, string fileDest, Algo algorithm);
    DiffManager(int paramCount,const char**programArgs);
    void PrintPerformanceBenchmarks();
    void StartComparison();
    unique_ptr<vector<Node>> sourceData = make_unique<vector<Node>>();
    unique_ptr<vector<Node>> compareData = make_unique<vector<Node>>();
    ~DiffManager();
private:
    Search compareAlgorithm;
    
    void LoadDataIntoMemory(fstream& source,unique_ptr<vector<Node>>& refData); 
    Search AlgorithmFactory(Algo algorithm);
};

#endif