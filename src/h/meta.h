/*M3TIOR 2015 & 2016
 *
 * Ok, so I appoligize to any programmer who doesn't like my style of doing things.
 * Basically the only reason this is here is to keep me from having to do the same
 * thing in more than one place. Seriously, I hate redundancies especially large
 * ones, and that's realistically an understatement.
 */

//make sure that version control is handled
//all of my versions will be released in stable blocks labeled by v(version)
//while all of the testing/unstable builds will be versioned by commit.
//so this comes in handy
#ifndef VERSION
//I don't want you getting a build without a tracer.
//this stops you from running a redlight essentially.
//plz, help debuggers...
#error "You must declare a version number for this build."
#endif //VERSION
#ifndef DATE
//cause build date plays a factor sometimes... IDK.
#define DATE __DATE__
#endif //DATE
#ifndef BUILDNOTE
#warning "It's recommended that you supply a build note with each non-stable build"
#endif //BUILDNOTE

/*
 * Just thought I'd put this here to help people save a little memory if possible.
 * we don't need everything in RAM especially when said things are verbose blocks of shit
 * that are just there to take up space... cough, cough** buildnote string **cough, cough...
 * though realistically, this can only reduce memory redundancy. if the buildnote is long
 * it's still gonna be just as long and take up just as much space...
 * then again. that's why they're originally stored as macros, so they aren't allowed to
 * consume memory where they aren't needed.
 *
 * proper usage of this optimization would look something along the lines of...
 *---------------------------------
 * main.c:
 *	#define META_OBJECT
 *	#include "meta.h"
 *	#undef META_OBJECT
 * //EOF
 *---------------------------------
 * obviously it's not perfect but it can be usefull
 */
#if defined (( META_OBJECT && __cplusplus ))
namespace META{
	const char* version=VERSION;
	const char* date=DATE;
	const char* buildnote=BUILDNOTE;
	namespace SHELL{
		namespace ARGT{
			char* cmd = "//";
			char* shvar0 = "-";
			char* shvar1 = "--";
		}
	}
}
#endif

/*
 * While realistically speaking, nobody should ever encounter this since
 * I'm using a project builder like make, If somebody gets a bright idea
 * to try and compile it themselfs without using make, this is here...
 */

/*
 * This is here for application developers.
 * common OS meta's
 */
#ifdef META_CONFIG_OS_?
/*
 * Don't have anything here atm, probs add something later.
 */
#else
#warning "No operaing system defined."
#endif //OS QUERY

/*
 * This is also here for application devs,
 * with the assumption that they have a CLI.
 * Realistically this is here to give you some meta junk for making your CLI easy to
 * reuse on multiple platforms.
 */
#ifdef META_CONFIG_SHELL_?
/*
 * Figured making an enumerated set was better
 * than having a bunch of underscores, because
 * OOP! << can't believe I'm actually using that acronym.
 */
/* // OBJECT PREVIEW
 * // because C doesn't allow nested enumerators... reasonable though...
 * 	enum META_SHELL{
 *		enum ARGT{
 *			cmd="\\"; //Windows
 *			shvar0="-"; //Bourne [Sh]ell
 *			shvar1="--"; //Bourne Shell Alternative
 *		}
 *	}
 */
#define META_SHELL.ARGT.cmd "/"
#define META_SHELL.ARGT.shvar0 "-"
#define META_SHELL.ARGT.shvar1 "--"
#else
#warning "No shell specified."
#endif //SHELL QUERY

