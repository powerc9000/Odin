#define SSA_OPS \
	SSA_OP(Invalid)\
\
	SSA_OP(Unknown)\
\
	SSA_OP(Comment) /* Does nothing */\
\
	SSA_OP(SP)    /* Stack Pointer */\
	SSA_OP(SB)    /* Stack Base */\
	SSA_OP(Addr)  /* Address of something - special rules for certain types when loading and storing (e.g. Maps) */\
\
	SSA_OP(Local)\
	SSA_OP(Global)\
	SSA_OP(Proc)\
\
	SSA_OP(Load)\
	SSA_OP(Store)\
	SSA_OP(Move)\
	SSA_OP(LoadReg)\
	SSA_OP(StoreReg)\
	SSA_OP(Zero) /* Zero initialize */\
\
	SSA_OP(ArrayIndex)  /* Index for a fixed array */\
	SSA_OP(PtrIndex)    /* Index for a struct/tuple/etc */\
	SSA_OP(PtrOffset)\
	SSA_OP(ValueIndex) /* Extract for a value from a register */\
\
	SSA_OP(Phi)\
	SSA_OP(Copy)\
\
	/* TODO(bill): calling conventions */\
	SSA_OP(CallOdin)\
	SSA_OP(CallC)\
	SSA_OP(CallStd)\
	SSA_OP(CallFast)\
\
	SSA_OP(BoundsCheck)\
	SSA_OP(SliceBoundsCheck)\
\
	/* Built in operations/procedures */\
	SSA_OP(Bswap16)\
	SSA_OP(Bswap32)\
	SSA_OP(Bswap64)\
\
	SSA_OP(Assume)\
	SSA_OP(DebugTrap)\
	SSA_OP(Trap)\
	SSA_OP(ReadCycleCounter)\
\
\
	SSA_OP(ConstBool)\
	SSA_OP(ConstString)\
	SSA_OP(ConstSlice)\
	SSA_OP(ConstNil)\
	SSA_OP(Const8)\
	SSA_OP(Const16)\
	SSA_OP(Const32)\
	SSA_OP(Const64)\
	SSA_OP(Const32F)\
	SSA_OP(Const64F)\
\
	/* These should be all the operations I could possibly need for the mean time */\
	SSA_OP(Add8)\
	SSA_OP(Add16)\
	SSA_OP(Add32)\
	SSA_OP(Add64)\
	SSA_OP(AddPtr)\
	SSA_OP(Add32F)\
	SSA_OP(Add64F)\
	SSA_OP(Sub8)\
	SSA_OP(Sub16)\
	SSA_OP(Sub32)\
	SSA_OP(Sub64)\
	SSA_OP(SubPtr)\
	SSA_OP(Sub32F)\
	SSA_OP(Sub64F)\
	SSA_OP(Mul8)\
	SSA_OP(Mul16)\
	SSA_OP(Mul32)\
	SSA_OP(Mul64)\
	SSA_OP(Mul32F)\
	SSA_OP(Mul64F)\
	SSA_OP(Div8)\
	SSA_OP(Div8U)\
	SSA_OP(Div16)\
	SSA_OP(Div16U)\
	SSA_OP(Div32)\
	SSA_OP(Div32U)\
	SSA_OP(Div64)\
	SSA_OP(Div64U)\
	SSA_OP(Div32F)\
	SSA_OP(Div64F)\
	SSA_OP(Mod8)\
	SSA_OP(Mod8U)\
	SSA_OP(Mod16)\
	SSA_OP(Mod16U)\
	SSA_OP(Mod32)\
	SSA_OP(Mod32U)\
	SSA_OP(Mod64)\
	SSA_OP(Mod64U)\
\
	SSA_OP(And8)\
	SSA_OP(And16)\
	SSA_OP(And32)\
	SSA_OP(And64)\
	SSA_OP(Or8)\
	SSA_OP(Or16)\
	SSA_OP(Or32)\
	SSA_OP(Or64)\
	SSA_OP(Xor8)\
	SSA_OP(Xor16)\
	SSA_OP(Xor32)\
	SSA_OP(Xor64)\
	SSA_OP(AndNot8)\
	SSA_OP(AndNot16)\
	SSA_OP(AndNot32)\
	SSA_OP(AndNot64)\
\
	SSA_OP(Lsh8x8)\
	SSA_OP(Lsh8x16)\
	SSA_OP(Lsh8x32)\
	SSA_OP(Lsh8x64)\
	SSA_OP(Lsh16x8)\
	SSA_OP(Lsh16x16)\
	SSA_OP(Lsh16x32)\
	SSA_OP(Lsh16x64)\
	SSA_OP(Lsh32x8)\
	SSA_OP(Lsh32x16)\
	SSA_OP(Lsh32x32)\
	SSA_OP(Lsh32x64)\
	SSA_OP(Lsh64x8)\
	SSA_OP(Lsh64x16)\
	SSA_OP(Lsh64x32)\
	SSA_OP(Lsh64x64)\
	SSA_OP(Rsh8x8)\
	SSA_OP(Rsh8x16)\
	SSA_OP(Rsh8x32)\
	SSA_OP(Rsh8x64)\
	SSA_OP(Rsh16x8)\
	SSA_OP(Rsh16x16)\
	SSA_OP(Rsh16x32)\
	SSA_OP(Rsh16x64)\
	SSA_OP(Rsh32x8)\
	SSA_OP(Rsh32x16)\
	SSA_OP(Rsh32x32)\
	SSA_OP(Rsh32x64)\
	SSA_OP(Rsh64x8)\
	SSA_OP(Rsh64x16)\
	SSA_OP(Rsh64x32)\
	SSA_OP(Rsh64x64)\
	SSA_OP(Rsh8Ux8)\
	SSA_OP(Rsh8Ux16)\
	SSA_OP(Rsh8Ux32)\
	SSA_OP(Rsh8Ux64)\
	SSA_OP(Rsh16Ux8)\
	SSA_OP(Rsh16Ux16)\
	SSA_OP(Rsh16Ux32)\
	SSA_OP(Rsh16Ux64)\
	SSA_OP(Rsh32Ux8)\
	SSA_OP(Rsh32Ux16)\
	SSA_OP(Rsh32Ux32)\
	SSA_OP(Rsh32Ux64)\
	SSA_OP(Rsh64Ux8)\
	SSA_OP(Rsh64Ux16)\
	SSA_OP(Rsh64Ux32)\
	SSA_OP(Rsh64Ux64)\
\
	SSA_OP(Eq8)\
	SSA_OP(Eq16)\
	SSA_OP(Eq32)\
	SSA_OP(Eq64)\
	SSA_OP(EqPtr)\
	SSA_OP(Eq32F)\
	SSA_OP(Eq64F)\
	SSA_OP(Ne8)\
	SSA_OP(Ne16)\
	SSA_OP(Ne32)\
	SSA_OP(Ne64)\
	SSA_OP(NePtr)\
	SSA_OP(Ne32F)\
	SSA_OP(Ne64F)\
	SSA_OP(Lt8)\
	SSA_OP(Lt16)\
	SSA_OP(Lt32)\
	SSA_OP(Lt64)\
	SSA_OP(LtPtr)\
	SSA_OP(Lt32F)\
	SSA_OP(Lt64F)\
	SSA_OP(Gt8)\
	SSA_OP(Gt16)\
	SSA_OP(Gt32)\
	SSA_OP(Gt64)\
	SSA_OP(GtPtr)\
	SSA_OP(Gt32F)\
	SSA_OP(Gt64F)\
	SSA_OP(Le8)\
	SSA_OP(Le16)\
	SSA_OP(Le32)\
	SSA_OP(Le64)\
	SSA_OP(LePtr)\
	SSA_OP(Le32F)\
	SSA_OP(Le64F)\
	SSA_OP(Ge8)\
	SSA_OP(Ge16)\
	SSA_OP(Ge32)\
	SSA_OP(Ge64)\
	SSA_OP(GePtr)\
	SSA_OP(Ge32F)\
	SSA_OP(Ge64F)\
\
	SSA_OP(NotB)\
	SSA_OP(EqB)\
	SSA_OP(NeB)\
\
	SSA_OP(Neg8)\
	SSA_OP(Neg16)\
	SSA_OP(Neg32)\
	SSA_OP(Neg64)\
	SSA_OP(Neg32F)\
	SSA_OP(Neg64F)\
\
	SSA_OP(Not8)\
	SSA_OP(Not16)\
	SSA_OP(Not32)\
	SSA_OP(Not64)\
\
	SSA_OP(SignExt8to16)\
	SSA_OP(SignExt8to32)\
	SSA_OP(SignExt8to64)\
	SSA_OP(SignExt16to32)\
	SSA_OP(SignExt16to64)\
	SSA_OP(SignExt32to64)\
	SSA_OP(ZeroExt8to16)\
	SSA_OP(ZeroExt8to32)\
	SSA_OP(ZeroExt8to64)\
	SSA_OP(ZeroExt16to32)\
	SSA_OP(ZeroExt16to64)\
	SSA_OP(ZeroExt32to64)\
	SSA_OP(Trunc16to8)\
	SSA_OP(Trunc32to8)\
	SSA_OP(Trunc32to16)\
	SSA_OP(Trunc64to8)\
	SSA_OP(Trunc64to16)\
	SSA_OP(Trunc64to32)\
\
	SSA_OP(Cvt32to32F)\
	SSA_OP(Cvt32to64F)\
	SSA_OP(Cvt64to32F)\
	SSA_OP(Cvt64to64F)\
	SSA_OP(Cvt32Fto32)\
	SSA_OP(Cvt32Fto64)\
	SSA_OP(Cvt64Fto32)\
	SSA_OP(Cvt64Fto64)\
	SSA_OP(Cvt32Fto64F)\
	SSA_OP(Cvt64Fto32F)\
	SSA_OP(Cvt32Uto32F)\
	SSA_OP(Cvt32Uto64F)\
	SSA_OP(Cvt32Fto32U)\
	SSA_OP(Cvt64Fto32U)\
	SSA_OP(Cvt64Uto32F)\
	SSA_OP(Cvt64Uto64F)\
	SSA_OP(Cvt32Fto64U)\
	SSA_OP(Cvt64Fto64U)\


enum ssaOp {
#define SSA_OP(k) GB_JOIN2(ssaOp_, k),
	SSA_OPS
#undef SSA_OP
};
typedef enum ssaOp ssaOp;

String const ssa_op_strings[] = {
#define SSA_OP(k) {cast(u8 *)#k, gb_size_of(#k)-1},
	SSA_OPS
#undef SSA_OP
};