STRUCT T_DELS_{
	ENUM {D_1, D_LIST} KIND;
	UNION{
		STRUCT T_DECL_ * D;
		STRUCT{
			STRUCT T_DECL_ * D;
			STRUCT T_DECLS_ * TAIL;
		}DLIST;
	}U;
};

#### OU ####


TYPEDEF STRUCT T_DECL_ * T_DECL;
TYPEDEF STRUCT T_DECLS_ * T_DECLS;

STRUCT T_DELS_{
	ENUM {D_1, D_LIST} KIND;
	UNION{
		T_DECL D;
		STRUCT{
			T_DECL D;
			T_DECLS TAIL;
		}DLIST;
	}U;
};





STRUCT T_DECL_ {
	ENUM { D_ID, D_IDVAL, D_F, D_FARGS, D_NTYPE} KIND;
	UNION{
		STRUCT{
			T_IDS IDS;;
			T_TYPE TYP;
		}did;
		STRUCT{
			T_IDS IDS;
			T_TYPE TYP;
			T_EXP E;
		}didval;
		STRUCT{
		
		}
	}
}