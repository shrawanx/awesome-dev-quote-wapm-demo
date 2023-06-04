#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_QUOTES 20

const char* quotes[NUM_QUOTES] = {
        "It's not a bug, it's a feature.",
        "Talk is cheap. Show me the code.",
        "Premature optimization is the root of all evil.",
        "Programming is the art of telling another human what one wants the computer to do.",
        "Code is read much more often than it is written.",
        "Any fool can write code that a computer can understand. Good programmers write code that humans can understand.",
        "There are only two hard things in computer science: cache invalidation and naming things.",
        "The best error message is the one that never shows up.",
        "Programs must be written for people to read, and only incidentally for machines to execute.",
        "Software is a great combination of artistry and engineering.",
        "Coding is not just code, that code represents an idea.",
        "Sometimes it pays to stay in bed on Monday, rather than spending the rest of the week debugging Monday's code.",
        "Before software can be reusable, it first has to be usable.",
        "One of my most productive days was throwing away 1,000 lines of code.",
        "The most important property of a program is whether it accomplishes the intention of its user.",
        "The best way to predict the future is to implement it.",
        "Programmers are not necessarily the best people to make design decisions.",
        "Controlling complexity is the essence of computer programming.",
        "A program that produces incorrect results twice as fast is infinitely slower.",
        "Good code is its own best documentation."
};

int main() {
    srand(time(NULL));
    int randomIndex = rand() % NUM_QUOTES;
    printf("%s\n", quotes[randomIndex]);
    return 0;
}
