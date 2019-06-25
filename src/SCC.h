#ifndef SCC_H
#define SCC_H

#include "BitsVector.h"
// This class represents a Strongly Connected Component
class SCC
{
    public:
        SCC();
        virtual ~SCC();
        Marquage * existState(Marquage *m);
        long getCount();
        void addState(Marquage *m);
        vector<Marquage*>* getListStates();
        bool isEqual(const SCC & scc);
    protected:

    private:
    vector<Marquage*> m_list;
};

#endif // SCC_H
