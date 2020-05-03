#include "binary-search.hh"

BinarySearch::BinarySearch(vector<Node> &source) : Search(source)
{
    cout << "BinarySearch algorithm is setting up..." << endl;
    sort(data.begin(),data.end());//todo: add time and space complexity
    IncrementOp(data.size());
    for(auto& record: data){
        IncrementOp(record.GetOpCount());
    }
}


bool BinarySearch::Exist(Node& item){
    return std::binary_search(data.begin(),data.end(),item);
    // return true;
}
