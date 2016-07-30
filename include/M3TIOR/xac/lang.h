//M3TIOR 2015

#ifndef M3TIOR__XAC__LANG
#warning "Including M3TIOR__XAC__LANG..."
#else
#error "An include conflict has been found within __FILE__"
#endif

#ifndef __cplusplus
#define CNAMESPACE(X) M3TIOR__XAC__LANG__##X
#else
#define CNAMESPACE(X) ##X
namespace M3TIOR{ namespace XAC{ namespace LANG{
#endif

enum CNAMESPACE(type){
	REG=0,
	MEM=1,
	BIN=2,
	INSTR=3,
}

typedef struct{
	int start;
	int end;
	int type;
}CNAMESPACE(token);

#ifdef __cplusplus
}}}
#endif
