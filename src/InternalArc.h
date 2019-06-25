#ifndef INTERNALARC_H
#define INTERNALARC_H

#include "Transition.h"
class Transition;
class InternalArc
{
    public:
        InternalArc();
        void setSource(Marquage *source);
        void setDestination(Marquage *dest);
        void setTranition(Transition *tr);
        virtual ~InternalArc();
        Marquage *getSource();
        Marquage *getDestination();
        Transition *getTransition();

    protected:

    private:
        Marquage* m_source;
        Marquage* m_destination;
        Transition * m_transition;
};

#endif // INTERNALARC_H
