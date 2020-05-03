#ifndef _NODE_HH_
#define _NODE_HH_

#include <string>
#include <functional>
class Node
{
public:
    Node() : value("")
    {
    }
    Node(std::string &data) : value(data)
    {
    }
    std::string value;

    bool operator<(const Node &str) const
    {
        return (value < str.value);
    }

    friend std::ostream & operator << (std::ostream &out, const Node &c);
};



#endif