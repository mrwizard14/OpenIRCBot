/*
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include "connectionHandler.h"
#include "kernel.h"
#include "protocolHandler.h"
#include "triggers.h"

using namespace std;

int main (int argc, char * const argv[])
{
    ///////////////////////////////
    //                           //
    //       Initialization      //
    //                           //
    ///////////////////////////////

    connectionHandler * IRCconnection = new connectionHandler;
    kernelClass * kernel = new kernelClass;
    triggers * logic = new triggers;
	protocolHandler * mainProtocolHandler = new protocolHandler;
	
    //IRCconnection.getProtocolHandler(&mainProtocolHandler);
	IRCconnection.connect();

    return 0;
} // main