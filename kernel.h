#ifndef KERNEL_H_INCLUDED
#define KERNEL_H_INCLUDED

/*
 *  kernel.h
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

/*
 *
 * Kernel
 * This class coordinates between the two threads, one of which is working
 * on IRC input, and the other, which is working on user input.
 *
 */

class kernelClass {
private:

public:
    int takeUserInput(std::string input);
};

#endif // KERNEL_H_INCLUDED

