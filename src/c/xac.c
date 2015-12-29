//M3TIOR 2015
/*
 *      Hello again!
 *      I thought it might be a good idea to go ahead and get this done.
 *      I've been waiting too long to work on this. So here, have a thing.
 */

#include <XAC/meta.h>

//-----------------------------------------------------------------------------
const char* help_msg = // help msg zone
"\
|             XAC | E[x]plicit Assembly Compiler              |\n\
|=============================================================|\n\
|syntax:                                                      |\n\
|  xac -abcABC <argument> -a <argumentX> -efg...              |\n\
|-------------------------------------------------------------|\n\
|#############################################################|\n\
|                                                             |\n\
|    For more help please check the manual for this tool      |\n\
|    ---- man -k darklight-xac ----                           |\n\
|                                                             |\n\
|#############################################################|\n\
";
//I'm chopping this part off and adding it to the manual
// yea, yea they aren't in alphabetical order anymore ok...
// I had to make some adjustments
/* NOTE: That wouldn't have compiled without the backslashes above.
"
|                                                             |
|    -b <binary format> :                                     |
|        Adds target binary format to the compilation target  |
|        list. All binary formats on this list will be        |
|        assembled and placed in the specified output DIR.    |
|                                                             |
|    -B <binary format plugin> :                              |
|        Adds target plugin to the binary format controller   |
|        then asserts it to the compilation target list.      |
|                                                             |
|    -l <language configuration file> :                       |
|        Specifies external language configuration files.     |
|                                                             |
|    -L <language configuration file> :                       |
|        Specifies internal language configuration files.     |
|                                                             |
|    -i <config file directory> :                             |
|        Adds the specified directory to the configuration    |
|        file search list. XAC will read any json file in the |
|        target directory.                                    |
|                                                             |
|    -I <file> :                                              |
|        Imports specified file to the appropriate plugin     |
|        location and returns error if one isn't found.       |
|                                                             |
|    -o <output directory> :                                  |
|        Adds specified directory to the list of output DIRs. |
|                                                             |
|    -q :                                                     |
|        Silences all errors from stderr.                     |
|                                                             |
|    -v :                                                     |
|        Display version data.                                |
|                                                             |
|    -V :                                                     |
|        Outputs verbose debug information.                   |
|                                                             |
|    -Z :                                                     |
|        Output raw version as string.                        |
|                                                             |
|#############################################################|
"
*/
//-----------------------------------------------------------------------------


#include <XAC/xac.h>
#include <XAC/jsmn.h>
#include <XAC/darklight.std.h>
#include <stdlib.h>
#include <stdio.h>

//special thanks to ftp://ftp.update.uu.se/pub/pdp11/rt/11sp68/604/streq.c
int streq(s1, s2)
register char *s1;
register char *s2;
{
	while (*s1++ == *s2) {
	    if (*s2++ == 0)return (1);
	}
	return (0);
}

int main(int* argc, char** argv){
	int arg_switch = 0;
	for(int l=1;l<argc;l++){
		/* Begin looping through arguments supplied by
		 * stdin. Appropriate input args to appropriate lists.
		 */
		if(argv[l][0]==STR_CMD){
			for(l2=1;argv[l][l2]=="\0";l2++){
				switch(argv[l][l2]){
					case 'h': //ASSERT HELP TO AVOID NEEDLESS PROCESSING
						printf(help_msg);
						return(0);
					case
				}
			}
		}
	}
}
