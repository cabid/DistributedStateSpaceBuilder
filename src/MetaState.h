/*
 * MetaState.h
 *
 *  Created on: 17 sept. 2015
 *      Author: LIP2
 */

#ifndef METASTATE_H_
#define METASTATE_H_
#include <vector>
#include "StateGraph.h"
#include "ProductSCC.h"
using namespace std;
class ArcSync;
class MetaState {
public:
	MetaState();
	vector<ArcSync*> getListArcSync();
	void setStateGraph(StateGraph* aut);
	void setId(unsigned int id);
	vector<Marquage*>*  getListMarq();
	vector<InternalArc>* getListArcs();
	vector<SCC*>* getListSCCs();
	SCC* findSCC(Marquage *state);
	virtual ~MetaState();
    SCC* getInitialSCC();
    ProductSCC* getSCCProductName();
    void setSCCProductName(ProductSCC* name);
    void addSyncArc(ArcSync *sync_arc);
private:
	StateGraph* m_graph;
	ProductSCC* m_name;
	vector<ArcSync*> m_arcs;
	unsigned int m_id;
};

#endif /* METASTATE_H_ */