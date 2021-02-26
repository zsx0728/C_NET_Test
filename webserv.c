/* webserv.c - a minimal web server (version 0.2)
 *	usage: ws portnumber
 *	features: supports the GET command only
 *		runs in the current directory
 *		forks a new child to handle each request
 *		has MAJOR security holes, for demo purposes only
 *		has many other weaknesses, but is a good start
 *	build: gcc webserv.c socklib.c -o webserv
 */
#include	<stdio.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<string.h>

int main(int ac, char *av[])
{
	int	sock, fd;
	FILE	*fpin;
	char	request[BUFSIZ];

	if (ac == 1)
	{
		fprintf(stderr, "usage: ws portnum\n");
		exit(1);
	}
	sock = make_server_socket(atoi(av[1]));
	if (sock == -1) exit(2);

	/* main loop here */
	while(1)
	{
		/* take a call and buffer it */
		fd = accept(sock, NULL, NULL);
		fpin = fdopen(fd, "r");

		/* read request */
		fgets(request, BUFSIZ, fpin);
		printf("got a call: request = %s", request);
		read_til_crnl(fpin);

		/* do what client asks */
		process_rq(request, fd);

		fclose(fpin);
	}
}

/*---------------------------------------------------------*
 * read_til_crnl(FILE *)
 * skip over all request info until a CRNL is seen
 * --------------------------------------------------------*/
read_til_crnl(FILE * fp)
{
	char buf[BUFSIZ];
	while(fgets(buf, BUFSIZ, fp) != NULL && strcmp(buf, "\r\n") != 0);
}

/*--------------------------------------------------------*
 * process_rq(char * rq, int fd)
 * do what the request asks for and write reply to fd
 * handles request in a new process
 * rq is HTTP command: GET /foo/bar.html HTTP/1.0
----------------------------------------------------------*/
process_rq(char * rq, int fd)
{
	char	cmd[BUFSIZ], arg[BUFSIZ];

	/* create a new process and return if not the child */

}

