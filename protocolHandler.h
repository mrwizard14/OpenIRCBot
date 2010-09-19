#ifndef PROTOCOLHANDLER_H_INCLUDED
#define PROTOCOLHANDLER_H_INCLUDED

/*
 *  protocolHandler.h
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

class protocolHandler {
private:
	std::string respondToPing(std::string pingline);
    int setNick(std::string nick);
    int sendUser(std::string name, std::string mode, std::string realName);
public:
    void takeLine(std::string line); // All input to this class goes through takeLine

    // Output to connectionHandler
    int connect(std::string nick, std::string name, std::string realName);
    void sendToRoom(std::string room, std::string message);
    void sendPM(std::string nick, std::string message);
    void sendNotice(std::string destination, std::string message);
    void joinRoom(std::string room);
    void partRoom(std::string room);
    void quit(std::string quitMessage);
};

std::string protocolHandler::respondToPing(std::string pingline) {
	return "PONG " + pingline;
}

#endif // PROTOCOLHANDLER_H_INCLUDED
