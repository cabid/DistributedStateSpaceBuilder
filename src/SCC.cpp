#include <iostream>
#include "SCC.h"

SCC::SCC()
{
    //ctor
}

SCC::~SCC()
{
    //dtor
}

Marquage * SCC::existState(Marquage *m)
{
    Marquage *found=NULL;
    int i=0;
    while (!found && i<m_list.size())
    {
        if (*m==*m_list.at(i)) found=m_list.at(i);
        i++;
    }
    return found;
}

// Compare whether two SCCs are equal
bool SCC::isEqual(const SCC & scc) {
    if (scc.m_list.size()!=this->m_list.size()) return false;
    if (this->m_list.size()==0) return true;
    //assert (this->m_list.size()!=0);
    if (existState(scc.m_list.at(0))) return true;
    return false;
}

long SCC::getCount()
{
    return m_list.size();
}

void SCC::addState(Marquage *m) {
    //if (!existState(m))
    m_list.push_back(m);
}

vector<Marquage*>* SCC::getListStates() {
    return &m_list;
}
