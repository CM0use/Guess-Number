
//          Copyright CM0use.
// Distributed under the Boost Software License, Version 1.0.
//    https://github.com/CM0use/Guess-Number/blob/main/LICENSE
//          https://www.boost.org/LICENSE_1_0.txt

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
