#ifndef LSBCC_MODE
#include "rpc/rpc_msg.h"
/* these don't have glibc protoypes. although in the library */
/* have to include the header before the protos are added */
extern bool_t	xdr_accepted_reply(XDR *, struct accepted_reply *);
extern bool_t	xdr_rejected_reply(XDR *, struct rejected_reply *);
#endif
