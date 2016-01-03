//M3TIOR 2015

// Used only durring compilation method calculation, and follow through
enum xac_storageloc{
	AUTO = 'a',
	RAM = 'r',
	DISK = 'd',
	TMP = 't'
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

int xac_parse(unsigned char xac_storageloc, xac_token* blob, )
