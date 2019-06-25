#ifndef STATEGRAPH_H
#define STATEGRAPH_H
#include "SCC.h"

#include "InternalArc.h"

class InternalArc;
class SCC;
class StateGraph
{
    public:
        StateGraph();
        virtual ~StateGraph();
        long getCountNodes();
        long getCountArcs();
        Marquage* existState(Marquage *marq);
        Marquage* addMarquage(Marquage *m);
        void addArc(InternalArc *arc);
        void setID(int module);
        vector<Marquage*>* getListMarquages();
        vector<InternalArc>* getListArcs();
        vector<SCC*>* getListSCCs();
        void computeSCCTarjan();
        SCC* findSCC(Marquage* state);
    protected:


    private:
        void strongconnect(Marquage *v);
        unsigned int m_module_id;
        vector<Marquage*> m_nodes;
        vector<InternalArc> m_arcs;
        vector<string> m_transitions;
        vector<SCC*> m_scc;


        unsigned int m_index; // Used in Tarjan algorithm
        vector<Marquage*> m_stack;
};

#endif // STATEGRAPH_H
