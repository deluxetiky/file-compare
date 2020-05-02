#ifndef _NODE_HH_
#define _NODE_HH_

#include <string>
class Node
{
public:
    Node(std::string data):value(data){}
    std::string value;
};

#endif