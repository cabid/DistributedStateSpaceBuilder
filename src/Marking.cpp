// Marking.cpp: implementation of the Marking class.
//
//////////////////////////////////////////////////////////////////////


#include "Marking.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Marking::Marking() : m_vide(false)
{

}

Marking::~Marking()
{

}




void Marking::add8BitsValue(const Octet val)
{
	m_vector.push_back(val);
}


Octet Marking::get8BitsValue(const int index)
{
	return m_vector[index];
}

Marking::Marking(const Marking &value)
{

	m_vide=value.m_vide;
	m_vector=value.m_vector;

}



Marking& Marking::operator=(const Marking &newvec)
{
	if (this==&newvec) return *this;
	this->m_vide=newvec.m_vide;
	this->m_vector=newvec.m_vector;
	return *this;
}





