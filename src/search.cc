#include "search.hh"



Search::Search(vector<Node>& refData){
    data = refData;
}

Search::Search(){}

Node Search::Find(std::string key){return Node();}

bool Search::Exist(std::string key){return false;}

void Search::PrintData(){
    cout<<"##### Data ######\n";
      for(int i=0;i<data.size();i++){
        cout<< data.at(i).value << endl;
    }
    cout<<"\n\n";
}

int Search::getOperationCount(){
    return operationCount;
}