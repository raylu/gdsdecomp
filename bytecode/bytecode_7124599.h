
/*************************************************************************/
/*  bytecode_7124599.h                                                   */
/*************************************************************************/

#ifndef GDSCRIPT_DECOMP_7124599_H
#define GDSCRIPT_DECOMP_7124599_H

#include "bytecode_base.h"

class GDScriptDecomp_7124599 : public GDScriptDecomp {
	GDCLASS(GDScriptDecomp_7124599, GDScriptDecomp);

protected:
	static void _bind_methods(){};

	static const int bytecode_version = 10;

	enum {
		TOKEN_BYTE_MASK = 0x80,
		TOKEN_BITS = 8,
		TOKEN_MASK = (1 << TOKEN_BITS) - 1,
		TOKEN_LINE_BITS = 24,
		TOKEN_LINE_MASK = (1 << TOKEN_LINE_BITS) - 1,
	};

public:
	virtual Error decompile_buffer(Vector<uint8_t> p_buffer) override;
	GDScriptDecomp_7124599() { engine_ver_major = 2; }
};

#endif
