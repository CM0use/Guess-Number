/**
 ** This file is part of Guess-Number project
 ** Copyright 2022-2023 CM0use dilanuzcs@gmail.com
 ** URL: https://github.com/CM0use/Guess-Number
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

# include <iostream>
# include <limits>

# include "../header/utilities.h"

void my_input(std::uint16_t& number)
{
    while(true) {
        std::cin >> number;
        if (std::cin.fail()) {
            std::cout << "Invalid entry. Try again.\n>>> ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        } return;
    }
}
