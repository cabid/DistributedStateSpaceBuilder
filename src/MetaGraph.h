/*
 * MetaGraph.h
 *
 *  Created on: 17 sept. 2015
 *      Author: LIP2
 */

#ifndef METAGRAPH_H_
#define METAGRAPH_H_
#include <vector>
#include "BitsVector.h"
#include "ProductSCC.h"
#include "MetaState.h"
using namespace std;
#define Marquage BitsVector

class MetaGraph {
public:


	MetaGraph();
	void addMetaState(MetaState *ms);
	virtual ~MetaGraph();
    vector<Marquage*>* getListLocalStates(ProductSCC* productscc);
    MetaState* findMetaStateByProductSCC(ProductSCC* productscc);
    int getMetaStateCount();
    MetaState * getMetaState(const int pos);
private:
	vector<MetaState*> ml_metastate;


};

#endif /* METAGRAPH_H_ */
