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
*  Name     : CSymTorrentMainView from SymTorrentMainView.h
*  Part of  : SymTorrent
*  Created  : 31.01.2006 by Imre Kel�nyi
*  Description:
*     Declares the main view for application.
*  Version  :
*  Copyright: 2006
* ============================================================================
*/

#ifndef SYMTORRENTMAINVIEW_H
#define SYMTORRENTMAINVIEW_H

// INCLUDES
#include <aknview.h>
#include <eikmenup.h>
#include "STTorrentManager.h"
#include "SymTorrentAppUi.h"
#include "STDefs.h"

// FORWARD DECLARATIONS
class CSymTorrentMainContainer;

// CLASS DECLARATION

/**
*  CSymTorrentMainView view class.
* 
*/
class CSymTorrentMainView : public CAknView
    {
    public: // Constructors and destructor

        /**
        * EPOC default constructor.
        */
        void ConstructL(CSTTorrentManager* aTorrentMgr, CSymTorrentAppUi* aAppUi);

        /**
        * Destructor.
        */
        ~CSymTorrentMainView();

    public: // Functions from base classes
        
        /**
        * From CAknView returns Uid of View
        * @return TUid uid of the view
        */
        TUid Id() const;

        /**
        * From MEikMenuObserver delegate commands from the menu
        * @param aCommand a command emitted by the menu 
        * @return void
        */
        void HandleCommandL(TInt aCommand);

        /**
        * From CAknView reaction if size change
        * @return void
        */
        void HandleViewRectChange();

        /**
        * From CAknView reaction if size change
        * @return void
        */
		void DynInitMenuPaneL(TInt aResourceId, CEikMenuPane* aMenuPane );

    private:

        /**
        * From CAknView activate the view
        * @param aPrevViewId 
        * @param aCustomMessageId 
        * @param aCustomMessage 
        * @return void
        */
        void DoActivateL(const TVwsViewId& aPrevViewId,TUid aCustomMessageId,
            const TDesC8& aCustomMessage);

        /**
        * From CAknView deactivate the view (free resources)
        * @return void
        */
        void DoDeactivate();
    private: // Data
        CSymTorrentMainContainer*		iMainContainer;
        CSTTorrentManager*				iTorrentMgr;
		CSymTorrentAppUi*				iAppUi;
		TInt							iLastItemIndex;
		TBool							iHideButtonOn;
    };

#endif

// End of File
