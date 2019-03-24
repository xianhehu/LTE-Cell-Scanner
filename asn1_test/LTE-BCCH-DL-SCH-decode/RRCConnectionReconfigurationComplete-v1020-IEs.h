/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_RRCConnectionReconfigurationComplete_v1020_IEs_H_
#define	_RRCConnectionReconfigurationComplete_v1020_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReconfigurationComplete_v1020_IEs__rlf_InfoAvailable_r10 {
	RRCConnectionReconfigurationComplete_v1020_IEs__rlf_InfoAvailable_r10_true	= 0
} e_RRCConnectionReconfigurationComplete_v1020_IEs__rlf_InfoAvailable_r10;
typedef enum RRCConnectionReconfigurationComplete_v1020_IEs__logMeasAvailable_r10 {
	RRCConnectionReconfigurationComplete_v1020_IEs__logMeasAvailable_r10_true	= 0
} e_RRCConnectionReconfigurationComplete_v1020_IEs__logMeasAvailable_r10;

/* Forward declarations */
struct RRCConnectionReconfigurationComplete_v1130_IEs;

/* RRCConnectionReconfigurationComplete-v1020-IEs */
typedef struct RRCConnectionReconfigurationComplete_v1020_IEs {
	long	*rlf_InfoAvailable_r10	/* OPTIONAL */;
	long	*logMeasAvailable_r10	/* OPTIONAL */;
	struct RRCConnectionReconfigurationComplete_v1130_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfigurationComplete_v1020_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rlf_InfoAvailable_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailable_r10_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfigurationComplete_v1020_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionReconfigurationComplete-v1130-IEs.h"

#endif	/* _RRCConnectionReconfigurationComplete_v1020_IEs_H_ */
#include <asn_internal.h>
