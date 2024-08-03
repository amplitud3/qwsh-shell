#include<iostream>
using namespace std;

void qwsh_loop();
int qwsh_execute(char **args);
char **qwsh_split_line(char *line);
char *qwsh_read_line(void);	
int main()
{

qwsh_loop();
return 0;

}


/*
 *Basic loop of a shell 
 *Read
 *Parse
 *Execute
 */


void qwsh_loop()
{
	char *line;
	char **args;
	int status;



	do{
	   printf("> ");
   	   line = qwsh_read_line();
	   args = qwsh_split_line(line);
           status = qwsh_execute(args);


	  free(line);
	  free(args);
	  }while(status);	  

}


char *qwsh_read_line()
{


return 0;
}


char  **qwsh_split_line(char *line)
{


return 0;
}


int qwsh_execute()
{

return 0;
}

