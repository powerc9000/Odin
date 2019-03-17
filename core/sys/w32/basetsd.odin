// +build windows
package w32

POINTER_64_INT :: uintptr;
INT8           :: i8;
PINT8          :: ^i8;
INT16          :: i16;
PINT16         :: ^i16;
INT32          :: i32;
PINT32         :: ^i32;
INT64          :: i64;
PINT64         :: ^i64;
UINT8          :: u8;
PUINT8         :: ^u8;
UINT16         :: u16;
PUINT16        :: ^u16;
UINT32         :: u32;
PUINT32        :: ^u32;
UINT64         :: u64;
PUINT64        :: ^u64;
LONG32         :: i32;
PLONG32        :: ^i32;
ULONG32        :: u32;
PULONG32       :: ^u32;
DWORD32        :: u32;
PDWORD32       :: ^u32;
INT_PTR        :: int;
PINT_PTR       :: ^int;
UINT_PTR       :: uintptr;
PUINT_PTR      :: ^uint;
LONG_PTR       :: int;
PLONG_PTR      :: ^int;
ULONG_PTR      :: uintptr;
PULONG_PTR     :: ^uintptr;
SHANDLE_PTR    :: int;
HANDLE_PTR     :: uintptr;

UHALF_PTR      :: size_of(uintptr) == 8 ? u32 : u16;
PUHALF_PTR     :: ^UHALF_PTR;
HALF_PTR       :: size_of(uintptr) == 8 ? i32 : i16;
PHALF_PTR      :: ^HALF_PTR;
SIZE_T         :: uint;
PSIZE_T        :: ^uint;
SSIZE_T        :: int;
PSSIZE_T       :: ^int;
DWORD_PTR      :: ULONG_PTR;
PDWORD_PTR     :: ^ULONG_PTR;
LONG64         :: i64;
PLONG64        :: ^i64;
ULONG64        :: u64;
PULONG64       :: ^u64;
DWORD64        :: u64;
PDWORD64       :: ^u64;
KAFFINITY      :: ULONG_PTR;
PKAFFINITY     :: ^KAFFINITY;
