#ifndef _SEARCH_HH_
#define _SEARCH_HH_

#include <vector>
#include <iostream>
#include "node.hh"
#include <memory>

using namespace std;

class Search
{
public:
    Search();
    Search(std::unique_ptr<vector<Node>>& data);  
    virtual bool Exist(string key);
    virtual Node Find(string key);
protected:
    std::unique_ptr<vector<Node>> data;
};

#endif