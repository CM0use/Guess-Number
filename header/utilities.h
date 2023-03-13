/**
 ** This file is part of https://github.com/CM0use/Guess-Number
 ** Copyright 2022-2023 CM0use <dilanuzcs@gmail.com>.
 **
 ** This program is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation, either version 3 of the License, or
 ** (at your option) any later version.
 **
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **
 ** You should have received a copy of the GNU General Public License
 ** along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

# ifndef UTILIDADES_H
# define UTILIDADES_H

# ifdef _WIN32
# define CLEAN_SCREEN system("CLS");
# elif __APPLE__
# define CLEAN_SCREEN system("clear");
# elif __linux__
# define CLEAN_SCREEN system("clear");
# endif

# define MIN 1
# define MAX 1000
# define MAX_ATTEMPTS 9

# define RESET_VALUES \
ramdom_number = dist(engine);\
n_attempts = 0;

void my_input(std::uint16_t&);

# endif
