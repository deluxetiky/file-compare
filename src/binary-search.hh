#ifndef _BINARY_SEARCH_HH_
#define _BINARY_SEARCH_HH_

#include "search.hh"
#include <memory>
#include "node.hh"
#include <vector>
#include <iostream>

class BinarySearch : public Search {
    
    public:
        BinarySearch(std::unique_ptr<vector<Node>>& data);
    
};

#endif