/***************************************************************************
OgrePagingLandScapeTexture_BaseTexture2.cpp  -  description
-------------------
begin                : Mon Apr 26 2004
copyright            : (C) 2003-2006 by Jose A Milan && Tuan Kuranes
email                : spoke@supercable.es & tuan.kuranes@free.fr
***************************************************************************/

/***************************************************************************
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU Lesser General Public License as        *
*   published by the Free Software Foundation; either version 2 of the    *
*   License, or (at your option) any later version.                       *
*                                                                         *
***************************************************************************/

#include "OgreVector3.h"
#include "OgreColourValue.h"

#include "OgreStringConverter.h"
#include "OgreMaterialManager.h"
#include "OgreTextureManager.h"
#include "OgreTechnique.h"
#include "OgrePass.h"

#include "OgrePagingLandScapeOptions.h"
#include "OgrePagingLandScapeTexture.h"
#include "OgrePagingLandScapeTextureManager.h"
#include "OgrePagingLandScapeTexture_BaseTexture2.h"
#include "OgrePagingLandScapeData2DManager.h"


namespace Ogre
{
  //-----------------------------------------------------------------------
    void PagingLandScapeTexture_BaseTexture2::setOptions(void)
    {
        mParent->getOptions()->VertexCompression = false;
        mParent->getOptions()->lodMorph = false;
    }
	//-----------------------------------------------------------------------
	PagingLandScapeTexture* PagingLandScapeTexture_BaseTexture2::newTexture()
	{
		return new PagingLandScapeTexture_BaseTexture2(mParent);
	}
	//-----------------------------------------------------------------------
	bool PagingLandScapeTexture_BaseTexture2::isMaterialSupported()
	{
		return true;
	}
	//-----------------------------------------------------------------------
	PagingLandScapeTexture_BaseTexture2::PagingLandScapeTexture_BaseTexture2(PagingLandScapeTextureManager *textureMgr) 
		: 
		PagingLandScapeTexture(textureMgr, "Base", 1, false)
	{
	}

	//-----------------------------------------------------------------------
	PagingLandScapeTexture_BaseTexture2::~PagingLandScapeTexture_BaseTexture2()
	{
	}
} //namespace