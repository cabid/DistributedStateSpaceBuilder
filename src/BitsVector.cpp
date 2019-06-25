// BitsVector.cpp: implementation of the BitsVector class.
//
//////////////////////////////////////////////////////////////////////


#include "BitsVector.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

BitsVector::BitsVector() : m_vide(false)
{

}

BitsVector::~BitsVector()
{

}




void BitsVector::add8BitsValue(const Octet val)
{
	m_vector.push_back(val);
}


Octet BitsVector::get8BitsValue(const int index)
{
	return m_vector[index];
}

BitsVector::BitsVector(const BitsVector &value)
{

	m_vide=value.m_vide;
	m_vector=value.m_vector;

}



BitsVector& BitsVector::operator=(const BitsVector &newvec)
{
	if (this==&newvec) return *this;
	this->m_vide=newvec.m_vide;
	this->m_vector=newvec.m_vector;
	return *this;
}





