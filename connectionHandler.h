#ifndef CONNECTIONHANDLER_H_INCLUDED
#define CONNECTIONHANDLER_H_INCLUDED

/*
 *  connectionHandler.h
 *  OpenIRCBot
 *
 *  Created by Lucas Kjaero on 9/16/10.
 *
 *  This file is part of OpenIRCBot.
 *
 *  OpenIRCBot is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  OpenIRCBot is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with OpenIRCBot.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "protocolHandler.h"

class connectionHandler {
private:
    // Error Handling
    void unexpectedDisconnect();
    protocolHandler * ptrProtocol;

public:
    // Initialization
    void getProtocolHandler(protocolHandler * Handler);

    // Normal usage commands
    int connect(std::string address, int port);
    void write(std::string message);
    void disconnect(std::string quitMessage);
};

void connectionHandler::unexpectedDisconnect() {
}

// Initialization
void connectionHandler::getProtocolHandler(protocolHandler * Handler) {
    ptrProtocol = Handler;
}

// Normal usage commands
int connectionHandler::connect(std::string address, int port) {

    return 0;
}

void connectionHandler::write(std::string message) {
}

void connectionHandler::disconnect(std::string quitMessage) {
}

#endif // CONNECTIONHANDLER_H_INCLUDED
