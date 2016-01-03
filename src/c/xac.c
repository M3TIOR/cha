//M3TIOR 2015
/*
 *      Hello again!
 *      I thought it might be a good idea to go ahead and get this done.
 *      I've been waiting too long to work on this. So here, have a thing.
 */

#include <XAC/meta.h> //version control handle
#include <XAC/lang.h> //xac parser
#include <XAC/jsmn.h> //json support
#include <XAC/darklight.std.h> //streq and other nice things
#include <stdlib.h> //malloc free
#include <stdio.h> //file io

//BEGIN INPUT LISTS
enum lists{
	sub_archs,
	arch_parents,
	binary_formats,
	binary_ext,
	languages,
	language_ext,
	config_dirs,
	output_dirs,
};

int list_count[8] = {0,0,0,0,0,0,0,0};
char** list_string[8];
//END INPUT LISTS

//Putting up an int buffer for
//storing loop counters
int l[5];

int main(int* argc, char** argv){
	unsigned short arg_switch = 0; //argument target storage variable
	for(l[0]=1;l[0]<argc;l[0]++){
		/* Begin looping through arguments supplied by
		 * stdin. Appropriate input args to appropriate lists.
		 */

		/* ARG implementation checklist
		 * -h = MOST : lINUX,Y; WINDOWS,Y; MAC,Y;
		 * -a = FALSE
		 * -A = FALSE
		 * -b = FALSE
		 * -B = FALSE
		 * -i = FALSE
		 * -I = FALSE
		 * -l = FALSE
		 * -L = FALSE
		 * -o = FALSE
		 * -q = FALSE
		 * -v = FALSE
		 * -V = FALSE
		 * -Z = FALSE
		 */

		//XXX: I'm making this explicitlhy two passes
		//	cause we realistically shoulldn't need more.

		//NOTE: FIRST PASS
		//Count input arguments first to allocate pointers in RAM
		//to appropriate input blobs to their proper subfields
		//and keep code from being executed before all bad args
		//are removed from the input field
		if(argv[l[0]][0]==STR_CMD){
			if(argv[l[0]][2]!="\0")
				printf("error: %s is not a correct argument for XAC",argv[l[0]]), return 0;
			switch(argv[l[0][1]]){
				case 'h': case '?': //ASSERT HELP
				//COVERING BOTH LINUX AND WINDOWS SYNTAX HERE
#if defined ( CONFIG_OS_LINUX || CONFIG_OS_OSX )
					//woo! killin it! linux and osx in one!
					printf("\
					|             XAC | E[x]plicit Assembly Compiler              |\n\
					|=============================================================|\n\
					|syntax:                                                      |\n\
					|  xac -A <argument> -a <argument> input...                   |\n\
					|-------------------------------------------------------------|\n\
					|#############################################################|\n\
					|                                                             |\n\
					|    For more help please check the manual for this tool      |\n\
					|    ---- man -k darklight-xac ----                           |\n\
					|                                                             |\n\
					|#############################################################|\n\
					");
#endif //CONFIG_OS_LINUX and CONFIG_OS_OSX
#ifdef CONFIG_OS_WINDOWS
					printf("\
					|             XAC | E[x]plicit Assembly Compiler              |\n\
					|=============================================================|\n\
					|syntax:                                                      |\n\
					|  xac /A <argument> /a <argument> input...                   |\n\
					|-------------------------------------------------------------|\n\
					|#############################################################|\n\
					|                                                             |\n\
					|    For more help please check the manual for this tool      |\n\
					|                                                             |\n\
					|                                                             |\n\
					|#############################################################|\n\
					");
#ifdef //CONFIG_OS_WINDOWS
					return 0;
				//END HELP MSG ZONE
				case 'a':list_count[lists.sub_archs]++;break;
				case 'A':list_count[lists.arch_parents]++;break;
				case 'b':list_count[lists.binary_formats]++;break;
				case 'B':list_count[lists.binary_ext]++;break;
				case 'i':list_count[lists.languages]++;break;
				case 'I':

				break;
				case 'l':

				break;
				case 'L':

				break;
				default:
					printf("error: %s is not a correct argument for XAC",argv[l[0]]); return 0;
			}
		}else{

		}



		//NOTE: SECOND PASS
		//pass the input args to thier appropriate subfields
		if(argv[l[0]][0]==STR_CMD){
			switch(argv[l[0][1]]){
				case '':

				break;
			}
		}else{

		}
	}
}
