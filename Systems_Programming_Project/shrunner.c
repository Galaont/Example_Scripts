
#define STR_CAP (512)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv) {
	printf ("please enter the script\n");
	printf ("workspace (opens the workspace)\n");
	printf ("greet 'name' (greets user)\n");
	printf ("newspaper (creates a newspaper\n");
	char* command;
	command = (char*)malloc(sizeof(char));
	scanf ("%[^\n]%*c", command); //may look like bunch of randoms but it works.
	                              //(to get inputs with special characters)
	char* split;
	split = strtok(command, " ");
	char** commandSplits = (char**)malloc(sizeof(char));

	int i = 0;
	while (split != NULL){
		printf ("%s\n",split);
		commandSplits[i] = split;
		i++;
		split = strtok (NULL, " ");
	}

	char *choice1[] = { //opens a custom workspace
		"/bin/bash",
		"./workspace.sh",
		commandSplits[1],
		NULL };

	char *choice2[] = { //input "greet 'name' greets the namer in input
		"/bin/bash",
		"./greet.sh",
		commandSplits[1],
		NULL };
	
	char *choice3[] = { //creates a newspaper
		"/bin/bash",
		"./newspaper.sh",
		commandSplits[1],
		NULL };
		

	if(strcmp(commandSplits[0], "workspace")== 0){
		execv(choice1[0], choice1);
		}
	else if(strcmp(commandSplits[0], "greet")== 0){
		execv(choice2[0], choice2);
		}
		else if(strcmp(commandSplits[0], "newspaper")== 0){
		execv(choice3[0], choice3);
		}
}

