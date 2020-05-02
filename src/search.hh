#ifndef _SEARCH_HH_
#define _SEARCH_HH_

#include <vector>
#include <iostream>
#include "binary-search.hh"
#include "node.hh"

using namespace std;

class Search
{
public:
    Search();
    Search(vector<Node> data);
    virtual void AddItem(Node item);
    virtual bool Exist(std::string key);
    virtual Node Find(std::string key);
private:
    vector<Node> data;
};

#endif