/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UE_EUTRA_Capability_v1170_IEs_H_
#define	_UE_EUTRA_Capability_v1170_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1170;

/* UE-EUTRA-Capability-v1170-IEs */
typedef struct UE_EUTRA_Capability_v1170_IEs {
	struct PhyLayerParameters_v1170	*phyLayerParameters_v1170	/* OPTIONAL */;
	long	*ue_Category_v1170	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v1170_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1170_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1170_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhyLayerParameters-v1170.h"

#endif	/* _UE_EUTRA_Capability_v1170_IEs_H_ */
#include <asn_internal.h>
