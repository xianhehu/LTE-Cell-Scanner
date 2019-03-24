/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_P_C_AndCBSR_r11_H_
#define	_P_C_AndCBSR_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* P-C-AndCBSR-r11 */
typedef struct P_C_AndCBSR_r11 {
	long	 p_C_r11;
	BIT_STRING_t	 codebookSubsetRestriction_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} P_C_AndCBSR_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_P_C_AndCBSR_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _P_C_AndCBSR_r11_H_ */
#include <asn_internal.h>
