#ifndef PELEMENT_H
#define PELEMENT_H

#include "BitsVector.h"
#include "Transition.h"
class PElement
{
    public:
        PElement();
        virtual ~PElement();
        Marquage* marquage;
        vector<Transition*> liste_transitions;
    protected:

    private:
};

#endif // PELEMENT_H
