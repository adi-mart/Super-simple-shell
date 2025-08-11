# Super Simple Shell - Exercices

## Structure du projet

### PID & PPID
- `PID/0-getppid.c` - Programme qui affiche le PID du processus parent
- `PID/1-pid_max.sh` - Script shell qui affiche la valeur maximale d'un process ID

### Arguments
- `arguments/0-av.c` - Programme qui affiche tous les arguments, sans utiliser ac
- `arguments/1-read_line.c` - Programme qui affiche "$ ", attend une commande et l'affiche
- `arguments/2-command_line_to_av.c` - Fonction qui divise une chaîne en tableau de mots

### Exécution de programmes
- `executing/exec.c` - Exemple d'utilisation d'execve

### Création de processus
- `processes/fork.c` - Exemple d'utilisation de fork
- `processes/wait.c` - Exemple d'utilisation de fork & wait
- `processes/fork_wait_execve.c` - Exercice: exécute ls -l /tmp dans 5 processus enfants
- `processes/shell.c` - Exercice: shell super simple

### Informations sur les fichiers
- `file_info/stat.c` - Exemple d'utilisation de stat
- `file_info/_which.c` - Exercice: trouve un fichier dans le PATH

### Environnement
- `environment/0-printenv.c` - Affiche l'environnement avec la variable globale environ
- `environment/1-env_vs_environ.c` - Compare les adresses de env et environ
- `environment/2-getenv.c` - Fonction _getenv (sans utiliser getenv)
- `environment/3-path.c` - Affiche chaque répertoire du PATH
- `environment/4-path_list.c` - Construit une liste chaînée des répertoires PATH
- `environment/5-setenv.c` - Fonction _setenv (sans utiliser setenv)
- `environment/6-unsetenv.c` - Fonction _unsetenv (sans utiliser unsetenv)

## Instructions

Tous les fichiers sont préparés avec des commentaires décrivant les exercices à implémenter.
Chaque fichier contient les prototypes et instructions nécessaires pour l'exercice correspondant.

## Compilation

Utilisez gcc avec les flags recommandés:
```bash
gcc -Wall -Wextra -Werror -pedantic fichier.c -o executable
```

Pour les scripts shell, n'oubliez pas de les rendre exécutables:
```bash
chmod +x script.sh
```
