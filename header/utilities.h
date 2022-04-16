
//          Copyright CM0use.
// Distributed under the Boost Software License, Version 1.0.
//    https://github.com/CM0use/Guess-Number/blob/main/LICENSE
//          https://www.boost.org/LICENSE_1_0.txt

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
