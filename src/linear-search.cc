#include "linear-search.hh"


LinearSearch::LinearSearch(vector<Node> &source) : Search(source)
{
    cout << "LinearSearch algorithm is setting up..." << endl;
    IncrementOp(data.size());
}