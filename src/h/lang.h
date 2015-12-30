//M3TIOR 2015

/*
#define TRANSPOSE_STORE_AUTO 0
#define TRANSPOSE_STORE_RAM 1
#define TRANSPOSE_STORE_DISK 2
#define TRANSPOSE_STORE_TMP 3
*/
//DEPRICATED

// COMMAND BUILD SWiTCH
#ifdef CONFIG_WINDOWS
#define STR_CMD '-'
#endif //CONFIG_WINDOWS
#ifndef CONFIG_WINDOWS
#define STR_CMD '/'
#endif //NCONFIG W


// Used only durring compilation method calculation, and follow through
enum xac_storageloc{
	AUTO = 0,
	RAM = 1,
	DISK = 2,
	TMP = 3
}

enum xac_type{
	REG,
	MEM,
	BIN,
	INSTR,
}

typedef struct{
	int start;
	int end;
	int type;
}xac_token;
