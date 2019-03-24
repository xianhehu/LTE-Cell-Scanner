/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UEAssistanceInformation_r11_IEs_H_
#define	_UEAssistanceInformation_r11_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEAssistanceInformation_r11_IEs__powerPrefIndication_r11 {
	UEAssistanceInformation_r11_IEs__powerPrefIndication_r11_normal	= 0,
	UEAssistanceInformation_r11_IEs__powerPrefIndication_r11_lowPowerConsumption	= 1
} e_UEAssistanceInformation_r11_IEs__powerPrefIndication_r11;

/* UEAssistanceInformation-r11-IEs */
typedef struct UEAssistanceInformation_r11_IEs {
	long	*powerPrefIndication_r11	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct UEAssistanceInformation_r11_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAssistanceInformation_r11_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_powerPrefIndication_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation_r11_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UEAssistanceInformation_r11_IEs_H_ */
#include <asn_internal.h>
