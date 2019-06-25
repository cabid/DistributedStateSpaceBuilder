// MarquageExtended.h: interface for the MarquageExtended class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MARQUAGEEXTENDED_H__AE3D64D2_30F6_4F28_B30C_17DE7AF1DFF1__INCLUDED_)
#define AFX_MARQUAGEEXTENDED_H__AE3D64D2_30F6_4F28_B30C_17DE7AF1DFF1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "BitsVector.h"

class MarquageExtended : public BitsVector  
{
public:
	bool m_marqed;
	MarquageExtended();
	virtual ~MarquageExtended();

};

#endif // !defined(AFX_MARQUAGEEXTENDED_H__AE3D64D2_30F6_4F28_B30C_17DE7AF1DFF1__INCLUDED_)
