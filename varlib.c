/* varlib.c
 *
 * a simple storage system to store name=value pairs
 * with facility to mark items as part of the environment
 *
 * interfaces:
 *	VLstore(name, value)	returns 1 for 0k, 0 for no
 *	VLlookup(name)		returns string or NULL if not there
 *	VLlist()		prints out current table
 *
 * environment - related functions
 *	VLexport(name)		adds name to list of env vars
 *	VLtable2environ()	copy from table to environ
 *	VLenviron2table()	copy from environ to table
 *
 * details:
 * the table is stored as an array of structs that
 * contain a flag for global and a single string of
 * the form name=value. This allows EZ addition to the
 * environment. It makes searching pretty easy, as
 * long as you search for "name="
 *
 */

#include	<stdio.h>
#include	<stdlib.h>
#include	"varlib.h"
#include	<string.h>

#define	MAXVARS	200						/* a linked list would be nicer */

struct	var
{
	char	*str;						/* name = val string */
	int	global;						/* a boolean */
};

static	struct	var	tab[MAXVARS];				/* the table */
static	char	*new_string(char *, char *);			/* private methods */
static	struct	var	*find_item(char *, int);

int	VLstore(char *name, char *val)
/*
 * traverse list, if found, replace it, else add at end
 * since there is no delete, a blank one is a free one
 * return 1 if trouble, 0 if ok(like a command)
 */
{
	struct	var	*temp;
	char	*s;
	int	rv = 1;

	/* find spot to put it and make new string */	
	if ((itemp=find_item(name,1)) != NULL &&
			(s=new_string(name,val)) != NULL)
	{
		if (itemp->str)					/* has a val? */
			free(itemp->str);			/* y:remove it */
		itemp->str = s;
		rv = 0;						/* ok! */
	}
	return rv;
}

char *new_string(char *name, char *val)
/*
 * returns new string of form name=value or NULL on error
 */
{
	char	*retval;

	retval = malloc(strlen(name) + strlen(val) + 2);
	if (retval != NULL)
		sprintf(retval, "%s = %s", name, val);
	return retval;
}


