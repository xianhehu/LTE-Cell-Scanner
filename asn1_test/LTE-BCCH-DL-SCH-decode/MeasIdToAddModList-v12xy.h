/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MeasIdToAddModList_v12xy_H_
#define	_MeasIdToAddModList_v12xy_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasIdToAddMod_v12xy;

/* MeasIdToAddModList-v12xy */
typedef struct MeasIdToAddModList_v12xy {
	A_SEQUENCE_OF(struct MeasIdToAddMod_v12xy) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasIdToAddModList_v12xy_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasIdToAddModList_v12xy;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasIdToAddMod-v12xy.h"

#endif	/* _MeasIdToAddModList_v12xy_H_ */
#include <asn_internal.h>
