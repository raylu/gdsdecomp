
/*************************************************************************/
/*  bytecode_c24c739.h                                                   */
/*************************************************************************/

#ifndef GDSCRIPT_DECOMP_c24c739_H
#define GDSCRIPT_DECOMP_c24c739_H

#include "bytecode_base.h"

class GDScriptDecomp_c24c739 : public GDScriptDecomp {
	GDCLASS(GDScriptDecomp_c24c739, GDScriptDecomp);

protected:
	static void _bind_methods(){};

	static const int bytecode_version = 12;

	enum {
		TOKEN_BYTE_MASK = 0x80,
		TOKEN_BITS = 8,
		TOKEN_MASK = (1 << TOKEN_BITS) - 1,
		TOKEN_LINE_BITS = 24,
		TOKEN_LINE_MASK = (1 << TOKEN_LINE_BITS) - 1,
	};

public:
	virtual Error decompile_buffer(Vector<uint8_t> p_buffer) override;
	GDScriptDecomp_c24c739() { engine_ver_major = 3; }
};

#endif
