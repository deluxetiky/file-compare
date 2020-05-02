#ifndef _DIFF_MANAGER_
#define _DIFF_MANAGER_

#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include "search.hh"
#include "node.hh"
#include <fstream>

class DiffManager
{

public:
    enum Algo
    {
        BINARYSEARCH,
        LINEARSEARCH
    };
    const Algo algorithm = BINARYSEARCH; //Default selected algorithm
    DiffManager(std::string fileSource, std::string fileDest, Algo algorithm);
    DiffManager(int paramCount,const char**programArgs);
    vector<Node> LoadDataIntoMemory(std::fstream source); 
    void PrintPerformanceBenchmarks();
    std::unique_ptr<std::vector<Node>> sourceData = std::make_unique<std::vector<Node>>();
    std::unique_ptr<std::vector<Node>> compareData = std::make_unique<std::vector<Node>>();
    ~DiffManager();
private:
    Search compareAlgorithm;
    void StartComparison();
    
    Search AlgorithmFactory(Algo algorithm);
};

#endif