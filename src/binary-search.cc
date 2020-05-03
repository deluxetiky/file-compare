#include "binary-search.hh"

BinarySearch::BinarySearch(vector<Node> &source) : Search(source)
{
    cout << "BinarySearch algorithm is setting up..." << endl;
    PrintData();
    sort(data.begin(),data.end());
    PrintData();
    operationCount+=data.size();
}