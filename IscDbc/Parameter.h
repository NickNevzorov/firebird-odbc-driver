/*
 *  
 *     The contents of this file are subject to the Initial 
 *     Developer's Public License Version 1.0 (the "License"); 
 *     you may not use this file except in compliance with the 
 *     License. You may obtain a copy of the License at 
 *     http://www.ibphoenix.com/idpl.html. 
 *
 *     Software distributed under the License is distributed on 
 *     an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, either 
 *     express or implied.  See the License for the specific 
 *     language governing rights and limitations under the License.
 *
 *
 *  The Original Code was created by James A. Starkey for IBPhoenix.
 *
 *  Copyright (c) 1999, 2000, 2001 James A. Starkey
 *  All Rights Reserved.
 */

// Parameter.h: interface for the Parameter class.
//
//////////////////////////////////////////////////////////////////////


#if !defined(AFX_PARAMETER_H__BD560E65_B194_11D3_AB9F_0000C01D2301__INCLUDED_)
#define AFX_PARAMETER_H__BD560E65_B194_11D3_AB9F_0000C01D2301__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class Parameter
{
public:
	Parameter (Parameter *nxt, const char *nam, int namLen, const char *val, int valLen);
	~Parameter();

	int			nameLength;
	char		*name;
	int			valueLength;
	char		*value;
	Parameter	*next;
};

#endif // !defined(AFX_PARAMETER_H__BD560E65_B194_11D3_AB9F_0000C01D2301__INCLUDED_)
