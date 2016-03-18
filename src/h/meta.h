/*M3TIOR 2015
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
#error "Please pass the compilation date and time through here too..."
#endif //DATE
#ifndef BUILDNOTE
#warning "It's recommended that you supply a build note with each non-stable build"
#endif //BUILDNOTE

/*
 * While realistically speaking, nobody should ever encounter this since
 * I'm using a project builder like make, If somebody gets a bright idea
 * to try and compile it themselfs without using make, this is here...
 */

/*
 * This is here for application developers.
 * common OS meta's
 */
#ifdef CONFIG_OS_?
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
#ifdef CONFIG_SHELL_?
/*
 * Figured making an enumerated set was better
 * than having a bunch of underscores, because
 * OOP! << can't believe I'm actually using that acronym.
 */
enum META_SHELL{
	enum triggers{
		
	}
	cmd="\\"; //Windows
	shvar0="-"; //Bourne [Sh]ell
	shvar1="--"; //Bourne Shell Alternative
}
#else
#warning "No shell specified."
#endif //SHELL QUERY

/*
 * I'm also moving this here because it needs to be uniform across the manual
 * pages and the application
 */
// COMMAND BUILD SWITCH
#ifdef CONFIG_SHELL_?
#ifndef CONFIG_SHELL_CUSTOM
#warning "No custom shell handle defined, using default."
#else
#define 

#endif
#elif defined CONFIG_SHELL_WINDOWS
#define STR_CMD "/"
#elif defined CONFIG_SHELL_SHVARIANT
#define STR_CMD "-"
#endif
