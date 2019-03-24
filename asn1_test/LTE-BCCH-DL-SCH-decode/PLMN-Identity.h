/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_PLMN_Identity_H_
#define	_PLMN_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MNC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MCC;

/* PLMN-Identity */
typedef struct PLMN_Identity {
	struct MCC	*mcc	/* OPTIONAL */;
	MNC_t	 mnc;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_Identity;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MCC.h"

#endif	/* _PLMN_Identity_H_ */
#include <asn_internal.h>
