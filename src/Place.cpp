// Place.cpp: implementation of the Place class.
//
//////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "Place.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Place::Place() : m_nb_tokens(0)
{

}

Place::~Place()
{

}

int Place::getTokens()
{
	return m_nb_tokens;
}

void Place::setTokens(const int value)
{
	m_nb_tokens=value;
}

void Place::addTokens(const int addValue)
{
	m_nb_tokens+=addValue;
}

void Place::subTokens(const int nb)
{
	m_nb_tokens-=nb;
}

//DEL bool Place::isNil()
//DEL {
//DEL 	return m_nil;
//DEL }
