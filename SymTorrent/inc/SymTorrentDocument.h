/*****************************************************************************
 * Copyright (C) 2006 Imre Kel�nyi
 *-------------------------------------------------------------------
 * This file is part of SymTorrent
 *
 * SymTorrent is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * SymTorrent is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Symella; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *****************************************************************************/

/*
* ============================================================================
*  Name     : CSymTorrentDocument from SymTorrentDocument.h
*  Part of  : SymTorrent
*  Created  : 31.01.2006 by Imre Kel�nyi
*  Description:
*     Declares document for application.
*  Version  :
*  Copyright: 2006
* ============================================================================
*/

#ifndef SYMTORRENTDOCUMENT_H
#define SYMTORRENTDOCUMENT_H

// INCLUDES
#include <akndoc.h>
#include "STDefs.h"
   
// CONSTANTS

// FORWARD DECLARATIONS
class  CEikAppUi;

// CLASS DECLARATION

/**
*  CSymTorrentDocument application class.
*/
class CSymTorrentDocument : public CAknDocument
    {
    public: // Constructors and destructor
        /**
         * Two-phased constructor.
         */
        static CSymTorrentDocument* NewL(CEikApplication& aApp);

        /**
         * Destructor.
         */
        virtual ~CSymTorrentDocument();

    protected:  // Functions from base classes

#ifdef EKA2
		void OpenFileL(CFileStore*& aFileStore, RFile& aFile);
#else
		CFileStore* OpenFileL(TBool aDoOpen, const TDesC &aFilename, RFs &aFs);
#endif

    private:

        /**
         * EPOC default constructor.
         */
        CSymTorrentDocument(CEikApplication& aApp);
        void ConstructL();

    private:

        /**
         * From CEikDocument, create CSymTorrentAppUi "App UI" object.
         */
        CEikAppUi* CreateAppUiL();
    };

#endif

// End of File

