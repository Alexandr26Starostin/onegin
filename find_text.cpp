#include <stdio.h>
#include <assert.h>

const char* find_text (int argc, const char** argv)
{
    assert (argv);

    for (int number_of_word = 1; number_of_word < argc; number_of_word++)
    {
        if (argv[number_of_word][0] == '-' && argv[number_of_word][1] == 'F' && argv[number_of_word][2] == 'R')
        {
            return (argv[number_of_word] + 3);
        }
    }

    return NULL;
}
