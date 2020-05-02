#ifndef _DIFF_MANAGER_
#define _DIFF_MANAGER_

#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include "search.hh"
#include "node.hh"

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
    void PrintPerformanceBenchmarks();
    std::unique_ptr<std::vector<Node>> sourceFile = std::make_unique<std::vector<Node>>();
    std::unique_ptr<std::vector<Node>> compFile = std::make_unique<std::vector<Node>>();
    ~DiffManager();
private:
    Search compareAlgorithm;
    void StartComparison();
    Search createAlgorithm(std::istream &in,Algo algorithm);
};

#endif