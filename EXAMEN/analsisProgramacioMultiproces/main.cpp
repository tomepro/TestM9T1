#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int x = 0;
    for (int i = 0; i < 2; ++i) {
        if (fork() == 0) {
            x += i + 1;
            std::cout << "Procés fill " << i << ": x = " << x << std::endl;
            return 0;
        }
    }
    wait(NULL);
    wait(NULL);
    std::cout << "Procés pare: x = " << x << std::endl;
    return 0;
}