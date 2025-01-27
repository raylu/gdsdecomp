
/*************************************************************************/
/*  bytecode_703004f.h                                                   */
/*************************************************************************/

#ifndef GDSCRIPT_DECOMP_703004f_H
#define GDSCRIPT_DECOMP_703004f_H

#include "bytecode_base.h"

class GDScriptDecomp_703004f : public GDScriptDecomp {
	GDCLASS(GDScriptDecomp_703004f, GDScriptDecomp);

protected:
	static void _bind_methods(){};

	static const int bytecode_version = 2;

	enum {
		TOKEN_BYTE_MASK = 0x80,
		TOKEN_BITS = 8,
		TOKEN_MASK = (1 << TOKEN_BITS) - 1,
		TOKEN_LINE_BITS = 24,
		TOKEN_LINE_MASK = (1 << TOKEN_LINE_BITS) - 1,
	};

public:
	virtual Error decompile_buffer(Vector<uint8_t> p_buffer) override;
	GDScriptDecomp_703004f() { engine_ver_major = 1; }
};

#endif
