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

/*
 * While realistically speaking, nobody should ever encounter this since
 * I'm using a project builder like make, If somebody gets a bright idea
 * to try and compile it themselfs without using make, this is here...
 */

/*
 * I'm also moving this here because it needs to be uniform across the manual
 * pages and the application
 */
// COMMAND BUILD SWITCH
#ifdef CONFIG_WINDOWS
#define STR_CMD '-'
#endif //CONFIG_WINDOWS
#ifndef CONFIG_WINDOWS
#define STR_CMD '/'
#endif //NCONFIG W
