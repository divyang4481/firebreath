/**********************************************************\ 
Original Author: Richard Bateman (taxilian)

Created:    Oct 19, 2009
License:    Dual license model; choose one of two:
            Eclipse Public License - Version 1.0
            http://www.eclipse.org/legal/epl-v10.html
            - or -
            GNU Lesser General Public License, version 2.1
            http://www.gnu.org/licenses/lgpl-2.1.html

Copyright 2009 PacketPass, Inc and the Firebreath development team
\**********************************************************/

#ifndef H_FB_PLUGINWINDOW
#define H_FB_PLUGINWINDOW

#include <string>
#include "PluginEventSource.h"

namespace FB {

    /** 
     * PluginWindow
     *
     * This is the base class for the window of a user-defined Plugin
     * This class is responsible for firing system events to the PluginCore
     **/
    class PluginWindow : public PluginEventSource
    {
    public:
        PluginWindow() { };
        virtual ~PluginWindow() { };
    };
};

#endif