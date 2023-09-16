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
# include <random>

# include "../header/utilities.h"

int main()
{
    std::uniform_int_distribution<std::uint16_t> dist(MIN,MAX);
    std::random_device rd;
    std::mt19937 engine(rd());
    
    std::uint16_t ramdom_number = dist(engine),
    n_attempts = 0,
    my_number;
    std::string option{"y"};

    CLEAN_SCREEN
    std::cout << "I have a number between 1 and 1000\n"
              << "Can you guess my number?\n"
              << "Please type your first number.\n";

    do
    {
        std::cout << "Attempts "
                  << n_attempts << '/' << MAX_ATTEMPTS
                  << "\n>>> ";
        my_input(my_number);

        if (my_number > ramdom_number) {
            std::puts("\nHigh number. Try again.\n");
            ++n_attempts;
        }

        else if (my_number < ramdom_number) {
            std::puts("\nLow number. Try again.\n");
            ++n_attempts;
        }

        else {
            if (!n_attempts)
                std::puts("Aha! You knew the secret!");
            else
                std::puts("Either you already knew the secret, or you were lucky!");

            std::cout << "Would you like to play again? [Y/y/S/s/N/n]?\n>>> ";
            std::cin >> option; 
            CLEAN_SCREEN
            RESET_VALUES
        }

        if (n_attempts > MAX_ATTEMPTS) {
            std::cout << "You should have done better!\n"
                      << "My number was: " << ramdom_number
                      << "\nWould you like to play again? [Y/y/S/s/N/n]?\n>>> ";
            std::cin >> option;
            CLEAN_SCREEN
            RESET_VALUES
        }
    } while(std::tolower(option[0]) == 'y' || std::tolower(option[0]) == 's');

    return EXIT_SUCCESS;
}
