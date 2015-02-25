/*************************************************************************\
 * AdapterRemoval - cleaning next-generation sequencing reads            *
 *                                                                       *
 * Copyright (C) 2011 by Stinus Lindgreen - stinus@binf.ku.dk            *
 * Copyright (C) 2014 by Mikkel Schubert - mikkelsch@gmail.com           *
 *                                                                       *
 * If you use the program, please cite the paper:                        *
 * S. Lindgreen (2012): AdapterRemoval: Easy Cleaning of Next Generation *
 * Sequencing Reads, BMC Research Notes, 5:337                           *
 * http://www.biomedcentral.com/1756-0500/5/337/                         *
 *                                                                       *
 * This program is free software: you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation, either version 3 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. *
\*************************************************************************/
#ifndef MAIN_H
#define MAIN_H

#include <string>

const std::string NAME = "AdapterRemoval";
const std::string VERSION = "ver. 2.0.0-pre1";
const std::string HELPTEXT = \
    "This program searches for and removes remnant adapter sequences from "
    "your read data.  The program can analyze both single end and paired end "
    "data.  For detailed explanation of the parameters, please refer to the "
    "man page.  For comments, suggestions  and feedback please contact Stinus\n"
    "Lindgreen (stinus@binf.ku.dk) and Mikkel Schubert (MikkelSch@gmail.com).\n"
    "\n"
    "If you use the program, please cite the paper:\n"
    "    S. Lindgreen (2012): AdapterRemoval: Easy Cleaning of Next "
    "Generation Sequencing Reads, BMC Research Notes, 5:337\n"
    "    http://www.biomedcentral.com/1756-0500/5/337/\n";

#endif