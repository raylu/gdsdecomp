
/*************************************************************************/
/*  bytecode_1add52b.h                                                   */
/*************************************************************************/

#ifndef GDSCRIPT_DECOMP_1add52b_H
#define GDSCRIPT_DECOMP_1add52b_H

#include "bytecode_base.h"

class GDScriptDecomp_1add52b : public GDScriptDecomp {
	GDCLASS(GDScriptDecomp_1add52b, GDScriptDecomp);

protected:
	static void _bind_methods(){};

	static const int bytecode_version = 11;

	enum {
		TOKEN_BYTE_MASK = 0x80,
		TOKEN_BITS = 8,
		TOKEN_MASK = (1 << TOKEN_BITS) - 1,
		TOKEN_LINE_BITS = 24,
		TOKEN_LINE_MASK = (1 << TOKEN_LINE_BITS) - 1,
	};

public:
	virtual Error decompile_buffer(Vector<uint8_t> p_buffer) override;
	GDScriptDecomp_1add52b() { engine_ver_major = 3; }
};

#endif
