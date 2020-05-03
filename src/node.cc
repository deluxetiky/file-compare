#include "node.hh"

std::ostream &operator<<(std::ostream &out, const Node &c)
{
    out << c.value;
    return out;
}

bool Node::operator<(const Node &node) const
{
    return (value < node.value);
}




bool Node::operator()(const Node& first, const Node& second){
    IncrementOp(1);
    return first.value<second.value;
}