#include "search.hh"



Search::Search(vector<Node>& refData){
    data = refData;
}

Search::Search(){}


bool Search::Exist(std::string key){return false;}

void Search::PrintData(){
    cout<<"##### Data ######\n";
    for (auto &record : data)
    {
        cout << record << endl;
    }
    cout<<"\n\n";
}

int Search::getOperationCount(){
    return operationCount;
}