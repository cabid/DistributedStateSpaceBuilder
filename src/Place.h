// Place.h: interface for the Place class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PLACE_H__4A191FB4_6CFF_4348_9744_00D6AE78A3E1__INCLUDED_)
#define AFX_PLACE_H__4A191FB4_6CFF_4348_9744_00D6AE78A3E1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Node1.h"

class Place : public Node  {
public:
	void subTokens(const int nb);
	void addTokens(const int addValue);
	void setTokens(const int value);
	int getTokens();
	Place();
	virtual ~Place();
private:

	int m_nb_tokens;
};

#endif // !defined(AFX_PLACE_H__4A191FB4_6CFF_4348_9744_00D6AE78A3E1__INCLUDED_)
