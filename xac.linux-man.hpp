//M3TIOR 2015
// why am I doing this again?

//I'm chopping this part off and adding it to the manual
// yea, yea they aren't in alphabetical order anymore ok...
// I had to make some adjustments
/* NOTE: That wouldn't have compiled without the backslashes above.
"
|    -a <sub-arch name> :                                     |
|        Adds target sub-architecture to the assembly target  |
|        list. Any sub-arch found within any architecture     |
|        family supplied by the -A argument will be assembled |
|        otherwise, if any sub-arch isn't found within any of |
|        the parrent arcitectures listed, xac will return an  |
|        ARCHITECTURE NOT FOUND error to accompany said arch. |
|                                                             |
|    -A <architecture family> :                               |
|        Adds target architecture family to the assembly      |
|        target list. If no sub-arch is supplied for said     |
|        architecture family, xac will try to assemble it's   |
|        most recent decendant (the newest CPU for said arch) |
|        If this argument isn't supplied to xac, it will      |
|	 attempt to autodetect your architecture and add that |
|	 to the assembly target list.                         |
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
|        file search list. XAC will attempt to read any json  |
|        file in the target directory.                        |
|                                                             |
|    -I <file> :                                              |
|        Imports specified file to the appropriate plugin     |
|        location and returns error if an appropriate         |
|        location isn't found for the target file.            |
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

//remember, this is only preprocessed stuff

#include <XAC/meta.h>

#ifdef MANUAL_BUILD_LINUXMAN

.TH XAC 1 DATE VERSION github.com/M3TIOR
.SH NAME
.B "XAC - E[x]plicit [A]ssembly [C]ompiler"
.SH DESCRIPTION
XAC is a universal assembler built to revolutionize the way programmers
optimize their code. It aims to provide a simple OOP solution to architecture
specific programming.
.SH SYNOPSIS



#endif //MANUAL_BUILD_LINUXMAN

#ifdef MANUAL_BUILD_HTML

<!DOCTYPE html>
<html>
	<head>
		<style>

		</style>
		<title>XAC-MANUAL</title>
	</head>
	<body>
		<div id="nav">

		</div>
		<div id="main">
			<h1 id="title">
				XAC
			</h1>
			<p id="description">

			</p>
			<p id="synopsis">
				<a href="#1"></a>
				<a href="#2"></a>
				<a href="#3"></a>
			</p>
		<div/>
	</body>
</html>

#endif //MANUAL_BUILD_HTML
