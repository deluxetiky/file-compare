#ifndef _SEARCH_HH_
#define _SEARCH_HH_

#include <vector>
#include <iostream>

using namespace std;

template <class T>
class Search
{
public:
    virtual void AddItem(T data);
    virtual bool Exist(std::string key);
    virtual vector<T> Find(std::string key);
private:
    vector<T> data;
};

#endif