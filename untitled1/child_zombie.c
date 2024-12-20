#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    // Fork returns process id in parent process
    pid_t child_pid = fork();

    // Parent process
    if (child_pid > 0) {
        sleep(50);
    }
        // Child process
    else if (child_pid == 0) {
        exit(0);
    }
        // Fork failed
    else {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    return 0;
}
