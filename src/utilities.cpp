
//          Copyright CM0use.
// Distributed under the Boost Software License, Version 1.0.
//    https://github.com/CM0use/Guess-Number/blob/main/LICENSE
//          https://www.boost.org/LICENSE_1_0.txt

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
