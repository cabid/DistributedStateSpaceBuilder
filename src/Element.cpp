// Element.cpp: implementation of the Element class.
//
//////////////////////////////////////////////////////////////////////


#include "Element.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Element::Element()
{

}

Element::~Element()
{

}

Element::Element(const Element &elt)
{
	liste_transitions=elt.liste_transitions;
	marquage=elt.marquage;
}
