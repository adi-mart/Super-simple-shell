````markdown
# Super Simple Shell - Exercises

## Project Structure

### PID & PPID
- `PID/0-getppid.c` - Program that prints the PID of the parent process
- `PID/1-pid_max.sh` - Shell script that prints the maximum value of a process ID

### Arguments
- `arguments/0-av.c` - Program that prints all arguments, without using ac
- `arguments/1-read_line.c` - Program that prints "$ ", waits for a command and prints it
- `arguments/2-command_line_to_av.c` - Function that splits a string into an array of words

### Program Execution
- `executing/exec.c` - Example of execve usage

### Process Creation
- `processes/fork.c` - Example of fork usage
- `processes/wait.c` - Example of fork & wait usage
- `processes/fork_wait_execve.c` - Exercise: execute ls -l /tmp in 5 child processes
- `processes/shell.c` - Exercise: super simple shell

### File Information
- `file_info/stat.c` - Example of stat usage
- `file_info/_which.c` - Exercise: find a file in PATH

### Environment
- `environment/0-printenv.c` - Print environment using the global variable environ
- `environment/1-env_vs_environ.c` - Compare addresses of env and environ
- `environment/2-getenv.c` - _getenv function (without using getenv)
- `environment/3-path.c` - Print each directory in PATH
- `environment/4-path_list.c` - Build a linked list of PATH directories
- `environment/5-setenv.c` - _setenv function (without using setenv)
- `environment/6-unsetenv.c` - _unsetenv function (without using unsetenv)

## Instructions

All files are prepared with comments describing the exercises to implement.
Each file contains the necessary prototypes and instructions for the corresponding exercise.

## Compilation

Use gcc with recommended flags:
```bash
gcc -Wall -Wextra -Werror -pedantic file.c -o executable
```

For shell scripts, don't forget to make them executable:
```bash
chmod +x script.sh
```
